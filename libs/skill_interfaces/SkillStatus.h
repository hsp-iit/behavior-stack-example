/*
 * SPDX-FileCopyrightText: 2006-2021 Istituto Italiano di Tecnologia (IIT)
 * SPDX-License-Identifier: BSD-3-Clause
 */

// Autogenerated by Thrift Compiler (0.14.1-yarped)
//
// This is an automatically generated file.
// It could get re-generated if the ALLOW_IDL_GENERATION flag is on.

#ifndef YARP_THRIFT_GENERATOR_ENUM_SKILLSTATUS_H
#define YARP_THRIFT_GENERATOR_ENUM_SKILLSTATUS_H

#include <yarp/os/Wire.h>
#include <yarp/os/idl/WireTypes.h>

/**
 * Enumerates the states every node can be in after execution during a particular
 * time step:
 * - "SKILL_SUCCESS" indicates that the node has completed running during this time step;
 * - "SKILL_FAILURE" indicates that the node has determined it will not be able to complete
 *   its task;
 * - "SKILL_RUNNING" indicates that the node has successfully moved forward during this
 *   time step, but the task is not yet complete;
 * - "SKILL_IDLE" indicates that the node is waiting to be (re)executed.
 */
enum SkillStatus : int32_t
{
    SKILL_IDLE = 0,
    SKILL_RUNNING = 1,
    SKILL_SUCCESS = 2,
    SKILL_FAILURE = 3
};

class SkillStatusConverter
{
public:
    static int32_t fromString(const std::string& input);
    static std::string toString(int32_t input);
};

#endif // YARP_THRIFT_GENERATOR_ENUM_SKILLSTATUS_H
