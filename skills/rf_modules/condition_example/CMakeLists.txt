################################################################################
#                                                                              #
# Copyright (C) 2020 Fondazione Istituto Italiano di Tecnologia (IIT)          #
# All Rights Reserved.                                                         #
#                                                                              #
################################################################################


add_executable(condition_example)
target_include_directories(condition_example
  PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${CMAKE_CURRENT_BINARY_DIR}
)
target_sources(condition_example
  PRIVATE
    main.cpp
)

target_sources(condition_example
  PRIVATE
    ${STATECHARTS_FILES})

target_link_libraries(condition_example
  PRIVATE
    YARP::YARP_os
    YARP::YARP_init
    skill_interface)
