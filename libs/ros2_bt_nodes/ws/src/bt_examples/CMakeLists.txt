cmake_minimum_required(VERSION 3.8)
project(bt_examples)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(bt_leaf_nodes_clients REQUIRED)
find_package(behaviortree_cpp_v3 REQUIRED)
find_package(rclcpp REQUIRED)
find_package(rclcpp_components REQUIRED)
find_package(custom_leaf_nodes REQUIRED)

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

  add_executable(run_bt_example
    src/run_bt_example.cpp
      )
#target_link_libraries(run_bt_example
#    custom_leaf_nodes
##   bt_leaf_nodes_clients
#     behaviortree_cpp_v3
#    rclcpp
#    rclcpp_components
#    pthread
#      ) #this is ugly
#target_include_directories(run_bt_example PRIVATE
#  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
#  $<INSTALL_INTERFACE:include>)

#target_compile_definitions(run_bt_example
#  PRIVATE "BT_EXAMPLE_BUILDING_DLL")

ament_target_dependencies(run_bt_example
custom_leaf_nodes
  bt_leaf_nodes_clients
  behaviortree_cpp_v3
  rclcpp
  rclcpp_components
  )

#rclcpp_components_register_node(run_bt_example PLUGIN  "run_bt_example" EXECUTABLE run_bt_example)
install(TARGETS
  run_bt_example
  DESTINATION lib/${PROJECT_NAME})
ament_package()
