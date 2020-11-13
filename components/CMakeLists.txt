################################################################################
#                                                                              #
# Copyright (C) 2020 Fondazione Istituto Italiano di Tecnologia (IIT)          #
# All Rights Reserved.                                                         #
#                                                                              #
################################################################################

 # Create the component (navigation client)
add_executable(SimpleCounter)
target_sources(SimpleCounter
  PRIVATE
    SimpleCounter.cpp)
target_link_libraries(SimpleCounter
  PRIVATE
    counter_interface
    YARP::YARP_os
    YARP::YARP_init
    YARP::YARP_dev)