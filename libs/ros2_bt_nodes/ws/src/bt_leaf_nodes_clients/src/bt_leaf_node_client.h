#pragma once

// #include <functional>
// #include <future>
// #include <memory>
// #include <string>
// #include <sstream>

#include "bt_leaf_nodes_interfaces/action/bt_interface.hpp"
#include "behaviortree_cpp_v3/action_node.h"
#include "rclcpp/rclcpp.hpp"
// #include "rclcpp_action/rclcpp_action.hpp"
// #include "rclcpp_components/register_node_macro.hpp"

namespace BT_leaf_nodes_clients
{
class BTNodeClient : public rclcpp::Node, public BT::SyncActionNode
{
public:
  using BTInterface = bt_leaf_nodes_interfaces::action::BTInterface;
  using GoalHandleBT= rclcpp_action::ClientGoalHandle<BTInterface>;
  explicit BTNodeClient(const rclcpp::NodeOptions & options);

  BT::NodeStatus tick() override;

private:
  rclcpp_action::Client<BTInterface>::SharedPtr client_ptr_;
  rclcpp::TimerBase::SharedPtr timer_;

  void goal_response_callback(const GoalHandleBT::SharedPtr & goal_handle);
  void feedback_callback(
    GoalHandleBT::SharedPtr,
    const std::shared_ptr<const BTInterface::Feedback> feedback);

  void result_callback(const GoalHandleBT::WrappedResult & result);

};  // class BTNodeClient

}  // namespace BT_leaf_nodes_servers
