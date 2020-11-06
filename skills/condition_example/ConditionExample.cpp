/******************************************************************************
 *                                                                            *
 * Copyright (C) 2020 Fondazione Istituto Italiano di Tecnologia (IIT)        *
 * All Rights Reserved.                                                       *
 *                                                                            *
 ******************************************************************************/

#include "ConditionExample.h"

#include <yarp/os/LogComponent.h>
#include <yarp/os/LogStream.h>

#include <QTimer>
#include <QDebug>
#include <QTime>
#include <QStateMachine>

namespace {
YARP_LOG_COMPONENT(CONDITIONEXAMPLE,
                   "scope.skill.ConditionExample",
                   yarp::os::Log::minimumPrintLevel(),
                   yarp::os::Log::LogTypeReserved,
                   yarp::os::Log::printCallback(),
                   nullptr)
}


ConditionExample::ConditionExample(std::string name ) :
        name(std::move(name))
{
    stateMachine.setDataModel(&dataModel);
}

bool ConditionExample::start()
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

SkillAck ConditionExample::request_ack()
{
    yCTrace(CONDITIONEXAMPLE) << "request_ack";

    while (true) {
        for (const auto& state : stateMachine.activeStateNames()) {
            if (state == "idle") {
                stateMachine.submitEvent("REQUEST_ACK");
                yCDebug(CONDITIONEXAMPLE) << "request_ack returning SKILL_IDLE";
                return SKILL_IDLE;
            }
            if (state == "get") {
                stateMachine.submitEvent("REQUEST_ACK");
                yCDebug(CONDITIONEXAMPLE) << "request_ack returning SKILL_IDLE";
                return SKILL_IDLE;
            }
            if (state == "success") {
                stateMachine.submitEvent("REQUEST_ACK");
                yCDebug(CONDITIONEXAMPLE) << "request_ack returning SKILL_SUCCESS";
                return SKILL_SUCCESS;
            }
            if (state == "failure") {
                stateMachine.submitEvent("REQUEST_ACK");
                yCDebug(CONDITIONEXAMPLE) << "request_ack returning SKILL_FAILURE";
                return SKILL_FAILURE;
            }

        }
    }
}

void ConditionExample::send_start()
{
    yCTrace(CONDITIONEXAMPLE) << "send_start";
    stateMachine.submitEvent("CMD_START");
}

void ConditionExample::send_stop()
{
    yCTrace(CONDITIONEXAMPLE) << "send_stop";
    stateMachine.submitEvent("CMD_STOP",  QStateMachine::HighPriority);
}
