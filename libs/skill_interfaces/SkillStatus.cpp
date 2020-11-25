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

#include <yarp/os/Wire.h>
#include <yarp/os/idl/WireTypes.h>
#include <SkillStatus.h>

int SkillStatusVocab::fromString(const std::string& input)
{
    // definitely needs optimizing :-)
    if (input=="SKILL_IDLE") {
        return static_cast<int>(SKILL_IDLE);
    }
    if (input=="SKILL_RUNNING") {
        return static_cast<int>(SKILL_RUNNING);
    }
    if (input=="SKILL_SUCCESS") {
        return static_cast<int>(SKILL_SUCCESS);
    }
    if (input=="SKILL_FAILURE") {
        return static_cast<int>(SKILL_FAILURE);
    }
    return -1;
}
std::string SkillStatusVocab::toString(int input) const
{
    switch(static_cast<SkillStatus>(input)) {
    case SKILL_IDLE:
        return "SKILL_IDLE";
    case SKILL_RUNNING:
        return "SKILL_RUNNING";
    case SKILL_SUCCESS:
        return "SKILL_SUCCESS";
    case SKILL_FAILURE:
        return "SKILL_FAILURE";
    }
    return "";
}
