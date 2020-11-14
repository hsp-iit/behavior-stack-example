/******************************************************************************
 *                                                                            *
 * Copyright (C) 2020 Fondazione Istituto Italiano di Tecnologia (IIT)        *
 * All Rights Reserved.                                                       *
 *                                                                            *
 ******************************************************************************/
/**
 * @file main.cpp
 * @authors: Michele Colledanchise <michele.colledanchise@iit.it>
 */

#ifdef ZMQ_FOUND
#include "behaviortree_cpp_v3/loggers/bt_zmq_publisher.h"
#endif

#include <iostream>
#include <behaviortree_cpp_v3/behavior_tree.h>
#include <yarp_condition.h>
#include <yarp_action.h>
#include <thread>         // std::this_thread::sleep_for
#include <chrono>         // std::chrono::seconds
#include <yarp/os/LogStream.h>
#include <behaviortree_cpp_v3/bt_factory.h>
#include <behaviortree_cpp_v3/actions/always_failure_node.h>
#include <behaviortree_cpp_v3/actions/always_success_node.h>

#include <behaviortree_cpp_v3/loggers/bt_cout_logger.h>
#include <behaviortree_cpp_v3/loggers/bt_minitrace_logger.h>
#include <behaviortree_cpp_v3/loggers/bt_file_logger.h>

#include <yarp/os/Network.h>
#include <yarp/os/Port.h>

using namespace std;
using namespace BT;



class FlipFlopCondition : public ConditionNode
{

public:
    FlipFlopCondition(const std::string& name) :
        ConditionNode(name, {} )
    {
        setRegistrationID("FlipFlopCondition");
    }

private:
    int n = 0;
    virtual BT::NodeStatus tick() override
    {
        if(n++ < 30)
        {
            cout << "condition true" << endl;
            return NodeStatus::SUCCESS;
        }
        else
        {
            n = 0;
            cout << "condition false" << endl;
            return NodeStatus::FAILURE;
        }
    }
};


class AlwaysRunning : public ActionNodeBase
{

public:
    AlwaysRunning(const std::string& name) :
        ActionNodeBase(name, {} )
    {
        setRegistrationID("AlwaysRunning");
    }

private:
    virtual BT::NodeStatus tick() override
    {
        cout << "Action Ticked" << endl;
            return NodeStatus::RUNNING;
    }

    virtual void halt() override
    {
        cout << "Action halted" << endl;

    }
};


int main()
{
    BehaviorTreeFactory bt_factory;
    bt_factory.registerNodeType<YARPAction>("YARPAction");
    bt_factory.registerNodeType<YARPCondition>("YARPCondition");
    bt_factory.registerNodeType<AlwaysRunning>("AlwaysRunning");

   // bt_factory.registerNodeType<FlipFlopCondition>("FlipFlopCondition");

    BT::Tree tree = bt_factory.createTreeFromFile("./test_action_BT.xml");


    // Create some logger
    StdCoutLogger logger_cout(tree);
    MinitraceLogger logger_minitrace(tree, "/tmp/bt_trace.json");
    FileLogger logger_file(tree, "/tmp/bt_trace.fbl");

#ifdef ZMQ_FOUND
    PublisherZMQ publisher_zmq(tree);
#endif
    printTreeRecursively(tree.root_node);


    //bool is_ok = true;
    vector<TreeNode::Ptr> all_nodes_prt = tree.nodes;

    // TODO I will make the code below properly
//    for (TreeNode::Ptr node_prt : all_nodes_prt)
//    {
//        TreeNode* node = node_prt.get();

//        YARPAction* as_yarp_action = static_cast<YARPAction*>(node);
//        //YARPCondition* as_yarp_condition = static_cast<YARPCondition*>(node);

//        if(as_yarp_action != NULL)
//        {

//            is_ok = as_yarp_action->init();

//            if(!is_ok)
//            {
//                yError() << "Something went wrong in the node init() of " << as_yarp_action->name();
//                return 0;
//            }
//        }
//    }

    yarp::os::Network yarp;
    yarp::os::Port port;

    // if (!port.open/*Fake*/("/tick/monitor")) {
    //     return EXIT_FAILURE;
    // }
    //
    // if (!port.addOutput("/monitor")) {
    //     return EXIT_FAILURE;
    // }


    while(true)
    {
        yarp::os::Bottle msg;
        msg.addDouble(yarp::os::SystemClock::nowSystem());
        msg.addString("/tick");
        msg.addString("*");
        msg.addString("tick");
        //msg.addBool(sender);
        auto& bcmd = msg.addList();
        YARP_UNUSED(bcmd);
        port.write(msg);

        tree.root_node->executeTick();
        std::this_thread::sleep_for (std::chrono::milliseconds(100));
    }

    return 0;
}
