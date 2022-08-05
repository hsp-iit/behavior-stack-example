cmake_minimum_required(VERSION 3.8)
project(bt_leaf_nodes_clients)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(bt_leaf_nodes_interfaces REQUIRED)
find_package(behaviortree_cpp_v3 REQUIRED)
find_package(rclcpp REQUIRED)
find_package(rclcpp_action REQUIRED)
find_package(rclcpp_components REQUIRED)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # comment the line when a copyright and license is added to all source files
  set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # comment the line when this package is in a git repo and when
  # a copyright and license is added to all source files
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

add_library(BT_node_client SHARED
src/bt_leaf_node_client.cpp
include/bt_leaf_nodes_clients/bt_leaf_node_client.h
  )

#ament_export_include_directories(include/)

target_include_directories(BT_node_client PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>)

target_compile_definitions(BT_node_client
  PRIVATE "BT_NODE_CLIENT_BUILDING_DLL")


ament_target_dependencies(BT_node_client
  "bt_leaf_nodes_interfaces"
  "behaviortree_cpp_v3"
  "rclcpp"
  "rclcpp_action"
  "rclcpp_components")

rclcpp_components_register_node(BT_node_client PLUGIN  "bt_leaf_nodes_clients::BTNodeClient" EXECUTABLE bt_node_client)

ament_export_targets(BT_node_clientTargets HAS_LIBRARY_TARGET)
ament_export_dependencies(bt_leaf_nodes_interfaces rclcpp_action)
install(
  DIRECTORY include/
  DESTINATION include
)

install(TARGETS
  BT_node_client
  EXPORT BT_node_clientTargets
  ARCHIVE DESTINATION lib
  LIBRARY DESTINATION lib
  RUNTIME DESTINATION bin
  INCLUDES DESTINATION include
  )


ament_package()
