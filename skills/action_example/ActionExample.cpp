/******************************************************************************
 *                                                                            *
 * Copyright (C) 2020 Fondazione Istituto Italiano di Tecnologia (IIT)        *
 * All Rights Reserved.                                                       *
 *                                                                            *
 ******************************************************************************/

#include "ActionExample.h"

#include <yarp/os/LogComponent.h>
#include <yarp/os/LogStream.h>

#include <QTimer>
#include <QDebug>
#include <QTime>
#include <QStateMachine>

namespace {
YARP_LOG_COMPONENT(ACTIONEXAMPLE,
                   "scope.skill.ActionExample",
                   yarp::os::Log::minimumPrintLevel(),
                   yarp::os::Log::LogTypeReserved,
                   yarp::os::Log::printCallback(),
                   nullptr)
}


ActionExample::ActionExample(std::string name ) :
        name(std::move(name))
{
    stateMachine.setDataModel(&dataModel);
}

bool ActionExample::execute()
{
    if (!yarp::os::NetworkBase::checkNetwork()) {
        qWarning("Error! YARP Network is not initialized");
        return false;
    }

    if (!port.open("/" + name + "/BT_rpc/server")) {
        qWarning("Error! Cannot open YARP port");
        return false;
    }

    if(!this->yarp().attachAsServer(port)) {
        qWarning("Error! Could not attach as server");
        return false;
    }

    stateMachine.start();

    return true;
}

SkillStatus ActionExample::get_status()
{
    yCTrace(ACTIONEXAMPLE) << "get_status";

    while (true) {
        for (const auto& state : stateMachine.activeStateNames()) {
            if (state == "idle") {
                stateMachine.submitEvent("get_status");
                yCDebug(ACTIONEXAMPLE) << "request_ack returning SKILL_IDLE";
                return SKILL_IDLE;
            }
            // if (state == "get") {
            //     stateMachine.submitEvent("get_status");
            //     yCDebug(ACTIONEXAMPLE) << "request_ack returning SKILL_IDLE";
            //     return SKILL_IDLE;
            // }
            if (state == "success") {
                stateMachine.submitEvent("get_status");
                yCDebug(ACTIONEXAMPLE) << "request_ack returning SKILL_SUCCESS";
                return SKILL_SUCCESS;
            }
            if (state == "failure") {
                stateMachine.submitEvent("get_status");
                yCDebug(ACTIONEXAMPLE) << "request_ack returning SKILL_FAILURE";
                return SKILL_FAILURE;
            }
            return SKILL_RUNNING;

        }
    }
}

void ActionExample::start()
{
    yCTrace(ACTIONEXAMPLE) << "start";
    stateMachine.submitEvent("start");
}

void ActionExample::stop()
{
    yCTrace(ACTIONEXAMPLE) << "stop";
    stateMachine.submitEvent("stop",  QStateMachine::HighPriority);
}
