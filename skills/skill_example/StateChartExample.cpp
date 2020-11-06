/******************************************************************************
 *                                                                            *
 * Copyright (C) 2020 Fondazione Istituto Italiano di Tecnologia (IIT)        *
 * All Rights Reserved.                                                       *
 *                                                                            *
 ******************************************************************************/

#include "StateChartExample.h"

#include <QDebug>

StateChartExample::StateChartExample(std::string name) :
        name(std::move(name))
{
    stateMachine.setDataModel(&dataModel);
}

bool StateChartExample::start()
{
    stateMachine.start();

    return true;
}
