/******************************************************************************
 *                                                                            *
 * Copyright (C) 2020 Fondazione Istituto Italiano di Tecnologia (IIT)        *
 * All Rights Reserved.                                                       *
 *                                                                            *
 ******************************************************************************/
/**
 * @file YARPNode.cpp
 * @authors: Michele Colledanchise <michele.colledanchise@iit.it>
 */


#include <yarp_node.h>
#include <behaviortree_cpp_v3/leaf_node.h>
#include <Skill_request.h>
#include <iostream>
#include <yarp/os/RpcClient.h>
#include <yarp/os/LogStream.h>
#include <yarp/os/Network.h>
#include <thread>         // std::this_thread::sleep_for
#include <chrono>         // std::chrono::seconds

using namespace std;
using namespace BT;

YARPNode::YARPNode(string name, string server_port_name, string carrier) :
        name(name),
        m_client_port_name("/"+name+"/BT_rpc/client"),
        m_server_port_name("/"+name+"/BT_rpc/server"),
        m_carrier(std::move(carrier))
{
}

void YARPNode::set_carrier(std::string carrier)
{
    m_carrier = std::move(carrier);
}

bool YARPNode::init()
{
    yarp::os::Network yarp;

    if (!m_rpc_client.open(m_client_port_name))
    {
        yError() << "Could not open port " << m_client_port_name;
        return false;
    }

    yarp::os::Network::sync(m_server_port_name, false);

    if (!yarp::os::Network::connect(m_client_port_name, m_server_port_name, m_carrier))
    {
        yError() << "Could not connect to port " << m_server_port_name;
        return false;
    }


    if (!m_bt_request.yarp().attachAsClient(m_rpc_client))
    {
        yError() << "Could not attach as client to " << m_server_port_name;
        return false;
    }
    yDebug() << "Node " << name << "initialized correctly";

    return true;
}

NodeStatus YARPNode::tick()
{

    yDebug() << "Node" << name << "ticked";
    SkillStatus status = m_bt_request.get_status();

    if(status == SKILL_IDLE)
    {
        yDebug() << "Node" << name << "start";

      m_bt_request.start();
      yDebug() << "Node" << name << "started";

      std::this_thread::sleep_for (std::chrono::milliseconds(100));
    }
    status = m_bt_request.get_status();
    while(status == SKILL_IDLE)
    {
        status = m_bt_request.get_status();
        std::this_thread::sleep_for (std::chrono::milliseconds(100));
        yDebug() << "Node" << name  << " status " << int(status) << "WAITING";

    }

    switch (status) {
    case SKILL_RUNNING:
       yDebug() << "Node" << name << "returns running";
        return NodeStatus::RUNNING;// may be two different enums (thrift and BT library). Making sure that the return status are the correct ones
    case SKILL_SUCCESS:
       yDebug() << "Node" << name << "returns success";
        return NodeStatus::SUCCESS;
    case SKILL_FAILURE:
       yDebug() << "Node" << name << "returns failure";
        return NodeStatus::FAILURE;
    default:
       yError() << "Invalid return status "<< status << "  received by node"   << name;
        break;
    }

    return NodeStatus::RUNNING;
}


NodeStatus YARPNode::status() const
{
    yDebug() << "Node" << name << "getting status";
    SkillStatus status = m_bt_request.get_status();
    switch (status) {
    case SKILL_RUNNING:
       yDebug() << "Node" << name << "returns running";
        return NodeStatus::RUNNING;// may be two different enums (thrift and BT library). Making sure that the return status are the correct ones
    case SKILL_SUCCESS:
       yDebug() << "Node" << name << "returns success";
        return NodeStatus::SUCCESS;
    case SKILL_FAILURE:
       yDebug() << "Node" << name << "returns failure";
        return NodeStatus::FAILURE;
    case SKILL_IDLE:
       yDebug() << "Node" << name << "returns failure";
        return NodeStatus::IDLE;
    default:
       yError() << "Invalid return status for received by node " << name;
        return NodeStatus::FAILURE;
    }
}
