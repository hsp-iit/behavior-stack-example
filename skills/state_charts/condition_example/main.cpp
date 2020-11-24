/******************************************************************************
 *                                                                            *
 * Copyright (C) 2020 Fondazione Istituto Italiano di Tecnologia (IIT)        *
 * All Rights Reserved.                                                       *
 *                                                                            *
 ******************************************************************************/


#include <QCoreApplication>
#include <QCommandLineParser>
#include <yarp/os/ResourceFinder.h>
#include <SCSkill.h>
#include "ConditionExampleDataModel.h"
#include "ConditionExampleStateMachine.h"

int main(int argc, char **argv)
{
  QCoreApplication app(argc, argv);
    QCoreApplication::setApplicationName("ConditionExample");
    QCoreApplication::setApplicationVersion("0.1");

    ConditionExampleDataModel model;
    ConditionExampleStateMachine sm;
    SCSkill bt("ConditionExample", &sm, &model);
    if (!bt.execute()) {
        return 1;
    }

    int ret = app.exec();

    return ret;
}
