################################################################################
#                                                                              #
# Copyright (C) 2020 Fondazione Istituto Italiano di Tecnologia (IIT)          #
# All Rights Reserved.                                                         #
#                                                                              #
################################################################################

add_subdirectory(lib)

# Create the BT executable
add_executable(from_xml_example)
target_sources(from_xml_example
  PRIVATE
    from_xml_example.cpp)
target_link_libraries(from_xml_example
  PRIVATE
    YARP::YARP_os
    YARP::YARP_init
    BehaviorTree::behaviortree_cpp_v3
    yarp_bt_nodes
    pthread)

file(COPY xmls/BT_example.xml DESTINATION "${CMAKE_BINARY_DIR}/${CMAKE_INSTALL_BINDIR}")
