/******************************************************************************
 *                                                                            *
 * Copyright (C) 2020 Fondazione Istituto Italiano di Tecnologia (IIT)        *
 * All Rights Reserved.                                                       *
 *                                                                            *
 ******************************************************************************/

#ifndef BATTERYLEVEL_SKILL_BATTERYLEVELDATAMODEL_H
#define BATTERYLEVEL_SKILL_BATTERYLEVELDATAMODEL_H

#include <QScxmlCppDataModel>
#include <QVariantMap>

#include <QTime>
#include <QTimer>
#include <QDebug>

//#include "BatteryReader.h"


class StateChartExampleDataModel: public QScxmlCppDataModel
{
    Q_OBJECT
    Q_SCXML_DATAMODEL

public:
    StateChartExampleDataModel() = default;

    bool setup(const QVariantMap& initialDataValues) override;

//    yarp::os::Network yarp;
//    yarp::os::RpcClient client_port;
//    BatteryReader batteryReader;
};

Q_DECLARE_METATYPE(::StateChartExampleDataModel*)

#endif // BATTERYLEVEL_SKILL_BATTERYLEVELDATAMODEL_H
