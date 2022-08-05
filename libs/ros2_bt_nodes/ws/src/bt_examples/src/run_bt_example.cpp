


#ifdef ZMQ_FOUND
#include "behaviortree_cpp_v3/loggers/bt_zmq_publisher.h"
#endif

#include <iostream>
#include <behaviortree_cpp_v3/behavior_tree.h>
#include "rclcpp/rclcpp.hpp"
#include <thread>         // std::this_thread::sleep_for
#include <chrono>         // std::chrono::seconds
#include <behaviortree_cpp_v3/bt_factory.h>

#include <behaviortree_cpp_v3/loggers/bt_cout_logger.h>
#include <behaviortree_cpp_v3/loggers/bt_minitrace_logger.h>
#include <behaviortree_cpp_v3/loggers/bt_file_logger.h>

//#include <custom_leaf_nodes/condition_example.h>
#include "bt_leaf_nodes_clients/bt_leaf_node_client.h"

using namespace std;
using namespace BT;

static const char* xml_text = R"(

 <root main_tree_to_execute = "MainTree" >
     <BehaviorTree ID="MainTree">
        <ReactiveSequence name="root">
          <ROS2Action name="Action"/>
        </ReactiveSequence>
     </BehaviorTree>
 </root>
 )";


int main(int argc, char *argv[])
{
    rclcpp::init(argc, argv);

    BehaviorTreeFactory bt_factory;
    bt_factory.registerNodeType<BT_leaf_nodes_clients::BTNodeClient>("ROS2Action");
  //  bt_factory.registerNodeType<ConditionExample>("ConditionExample");

    BT::Tree tree = bt_factory.createTreeFromText(xml_text);


    // Create some logger
    StdCoutLogger logger_cout(tree);
    MinitraceLogger logger_minitrace(tree, "/tmp/bt_trace.json");
    FileLogger logger_file(tree, "/tmp/bt_trace.fbl");

#ifdef ZMQ_FOUND
    PublisherZMQ publisher_zmq(tree);
#endif
    printTreeRecursively(tree.rootNode());


    while(true)
    {
            tree.tickRoot();
            std::this_thread::sleep_for (std::chrono::milliseconds(100));
    }

    return 0;
}



// int main(int argc, char * argv[])
// {
//
//   rclcpp::spin();
//   rclcpp::shutdown();
//   return 0;
// }
