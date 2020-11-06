/******************************************************************************
 *                                                                            *
 * Copyright (C) 2020 Fondazione Istituto Italiano di Tecnologia (IIT)        *
 * All Rights Reserved.                                                       *
 *                                                                            *
 ******************************************************************************/

#ifndef BATTERYLEVEL_SKILL_BATTERYLEVELSKILL_H
#define BATTERYLEVEL_SKILL_BATTERYLEVELSKILL_H

#include <StateChartExampleStateMachine.h>
#include "StateChartExampleDataModel.h"

class StateChartExample
{
public:
    StateChartExample(std::string name);

    bool start();
private:
    std::string name;
    StateChartExampleDataModel dataModel;
    StateChartExampleStateMachine stateMachine;
};

#endif // BATTERYLEVEL_SKILL_BATTERYLEVELSKILL_H
