/******************************************************************************
 *                                                                            *
 * Copyright (C) 2020 Fondazione Istituto Italiano di Tecnologia (IIT)        *
 * All Rights Reserved.                                                       *
 *                                                                            *
 ******************************************************************************/

#include "ConditionExample.h"

#include <QCoreApplication>
#include <QCommandLineParser>
#include <yarp/os/ResourceFinder.h>

int main(int argc, char **argv)
{
  QCoreApplication app(argc, argv);
    QCoreApplication::setApplicationName("ConditionExample");
    QCoreApplication::setApplicationVersion("0.1");

    ConditionExample bt("ConditionExample");
    if (!bt.execute()) {
        return 1;
    }

    int ret = app.exec();

    return ret;
}
