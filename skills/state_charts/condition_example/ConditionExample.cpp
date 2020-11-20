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

bool ConditionExample::execute()
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

SkillStatus ConditionExample::get_status()
{
    yCTrace(CONDITIONEXAMPLE) << "get_status";

    while (true) {
        for (const auto& state : stateMachine.activeStateNames()) {
            if (state == "idle") {
                stateMachine.submitEvent("get_status");
                yCDebug(CONDITIONEXAMPLE) << "get_status returning SKILL_IDLE";
                return SKILL_IDLE;
            }
            if (state == "get") {
                stateMachine.submitEvent("get_status");
                yCDebug(CONDITIONEXAMPLE) << "get_status returning SKILL_IDLE";
                return SKILL_IDLE;
            }
            if (state == "success") {
                stateMachine.submitEvent("get_status");
                yCDebug(CONDITIONEXAMPLE) << "get_status returning SKILL_SUCCESS";
                return SKILL_SUCCESS;
            }
            if (state == "failure") {
                stateMachine.submitEvent("get_status");
                yCDebug(CONDITIONEXAMPLE) << "get_status returning SKILL_FAILURE";
                return SKILL_FAILURE;
            }

        }
    }
}

void ConditionExample::start()
{
    yCTrace(CONDITIONEXAMPLE) << "start";
    stateMachine.submitEvent("start");
}

void ConditionExample::stop()
{
    yCTrace(CONDITIONEXAMPLE) << "stop";
    stateMachine.submitEvent("stop",  QStateMachine::HighPriority);
}
