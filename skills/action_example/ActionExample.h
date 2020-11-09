/******************************************************************************
 *                                                                            *
 * Copyright (C) 2020 Fondazione Istituto Italiano di Tecnologia (IIT)        *
 * All Rights Reserved.                                                       *
 *                                                                            *
 ******************************************************************************/

# pragma once

#include <Skill_request.h>

#include <yarp/os/RpcServer.h>
#include <yarp/os/Network.h>

#include "ActionExampleStateMachine.h"
#include "ActionExampleDataModel.h"

class ActionExample:
        public Skill_request
{
public:
    ActionExample(std::string name );

    bool start();

    SkillAck request_ack() override;
    void send_start() override;
    void send_stop() override;

private:
    std::string name;
    yarp::os::Network yarpnet;
    yarp::os::RpcServer port;
    ActionExampleDataModel dataModel;
    ActionExampleStateMachine stateMachine;
};
