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
 #include "ActionExampleDataModel.h"
 #include "ActionExampleStateMachine.h"

 int main(int argc, char **argv)
 {
   QCoreApplication app(argc, argv);
     QCoreApplication::setApplicationName("ActionExample");
     QCoreApplication::setApplicationVersion("0.1");

     ActionExampleDataModel model;
     ActionExampleStateMachine sm;
     SCSkill bt("ActionExample", &sm, &model);
     if (!bt.execute()) {
         return 1;
     }

     int ret = app.exec();

     return ret;
 }
