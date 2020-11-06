################################################################################
#                                                                              #
# Copyright (C) 2020 Fondazione Istituto Italiano di Tecnologia (IIT)          #
# All Rights Reserved.                                                         #
#                                                                              #
################################################################################

# Create the skill (state machine executable)


add_executable(ConditionExample)
target_include_directories(ConditionExample
  PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${CMAKE_CURRENT_BINARY_DIR}
)
target_sources(ConditionExample
  PRIVATE
    main.cpp
    ConditionExample.cpp
    ConditionExample.h
    ConditionExampleDataModel.cpp
    ConditionExampleDataModel.h
)

qt5_add_statecharts(STATECHARTS_FILES ConditionExampleStateMachine.scxml)
set_source_files_properties(${CMAKE_CURRENT_BINARY_DIR}/ConditionExampleStateMachine.cpp PROPERTIES SKIP_AUTOMOC TRUE)

target_sources(ConditionExample
  PRIVATE
    ${STATECHARTS_FILES})

target_link_libraries(ConditionExample
  PRIVATE
    Qt5::Scxml
    YARP::YARP_os
    YARP::YARP_init
    BT_protocol)
