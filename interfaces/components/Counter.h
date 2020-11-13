/*
 * Copyright (C) 2006-2020 Istituto Italiano di Tecnologia (IIT)
 * All rights reserved.
 *
 * This software may be modified and distributed under the terms of the
 * BSD-3-Clause license. See the accompanying LICENSE file for details.
 */

// Autogenerated by Thrift Compiler (0.12.0-yarped)
//
// This is an automatically generated file.
// It could get re-generated if the ALLOW_IDL_GENERATION flag is on.

#ifndef YARP_THRIFT_GENERATOR_SERVICE_COUNTER_H
#define YARP_THRIFT_GENERATOR_SERVICE_COUNTER_H

#include <yarp/os/Wire.h>
#include <yarp/os/idl/WireTypes.h>

/**
 * ****************************************************************************
 *                                                                             *
 *  Copyright (C) 2020 Fondazione Istituto Italiano di Tecnologia (IIT)        *
 *  All Rights Reserved.                                                       *
 *                                                                             *
 * ****************************************************************************
 */
class Counter :
        public yarp::os::Wire
{
public:
    // Constructor
    Counter();

    virtual std::int32_t get_value();

    virtual void increase();

    virtual void decrease();

    virtual void reset();

    // help method
    virtual std::vector<std::string> help(const std::string& functionName = "--all");

    // read from ConnectionReader
    bool read(yarp::os::ConnectionReader& connection) override;
};

#endif // YARP_THRIFT_GENERATOR_SERVICE_COUNTER_H
