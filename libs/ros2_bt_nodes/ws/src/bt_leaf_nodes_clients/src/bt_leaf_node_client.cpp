#include <functional>
#include <future>
#include <memory>
#include <string>
#include <sstream>

#include "bt_leaf_nodes_interfaces/action/bt_interface.hpp"
#include "behaviortree_cpp_v3/action_node.h"
#include "rclcpp/rclcpp.hpp"
#include "rclcpp_action/rclcpp_action.hpp"
#include "rclcpp_components/register_node_macro.hpp"
#include "bt_leaf_node_client.h"
namespace BT_leaf_nodes_clients
{


  BTNodeClient::BTNodeClient(const rclcpp::NodeOptions & options)
  : Node("bt_leaf_node_client", options), SyncActionNode("bt_leaf_node_client", {})
  {
    this->client_ptr_ = rclcpp_action::create_client<BTInterface>(
      this,
      "BTInterface");

    // this->timer_ = this->create_wall_timer(
    //   std::chrono::milliseconds(500),
    //   std::bind(&BTNodeClient::send_goal, this));
  }

  void BTNodeClient::goal_response_callback(const GoalHandleBT::SharedPtr & goal_handle)
  {
    if (!goal_handle) {
      RCLCPP_ERROR(this->get_logger(), "Goal was rejected by server");
    } else {
      RCLCPP_INFO(this->get_logger(), "Goal accepted by server, waiting for result");
    }
  }

  BT::NodeStatus BTNodeClient::tick()
  {
    using namespace std::placeholders;

    this->timer_->cancel();

    if (!this->client_ptr_->wait_for_action_server()) {
      RCLCPP_ERROR(this->get_logger(), "Action server not available after waiting");
      rclcpp::shutdown();
      return BT::NodeStatus::FAILURE; // Failure
    }

    auto goal_msg = BTInterface::Goal();
    goal_msg.command = 1; // tick. TODO make enum

    RCLCPP_INFO(this->get_logger(), "Sending tick to server");

    auto send_goal_options = rclcpp_action::Client<BTInterface>::SendGoalOptions();
    send_goal_options.goal_response_callback =
      std::bind(&BTNodeClient::goal_response_callback, this, _1);
    send_goal_options.feedback_callback =
      std::bind(&BTNodeClient::feedback_callback, this, _1, _2);
    send_goal_options.result_callback =
      std::bind(&BTNodeClient::result_callback, this, _1);
    this->client_ptr_->async_send_goal(goal_msg, send_goal_options);
  //  return send_goal_options.result_callback.result->final_return_status;
  return BT::NodeStatus::SUCCESS;
  }


  void BTNodeClient::feedback_callback(
    GoalHandleBT::SharedPtr,
    const std::shared_ptr<const BTInterface::Feedback> feedback)
  {
    // std::stringstream ss;
    // ss << "Next number in sequence received: ";
    // for (auto number : feedback->current_return_status) {
    //   ss << number << " ";
    // }
    // RCLCPP_INFO(this->get_logger(), ss.str().c_str());
  }

  void BTNodeClient::result_callback(const GoalHandleBT::WrappedResult & result)
  {
    switch (result.code) {
      case rclcpp_action::ResultCode::SUCCEEDED:
        break;
      case rclcpp_action::ResultCode::ABORTED:
        RCLCPP_ERROR(this->get_logger(), "Goal was aborted");
        return;
      case rclcpp_action::ResultCode::CANCELED:
        RCLCPP_ERROR(this->get_logger(), "Goal was canceled");
        return;
      default:
        RCLCPP_ERROR(this->get_logger(), "Unknown result code");
        return;
    }
    // std::stringstream ss;
    // ss << "Result received: " <<
    // result.result->final_return_status
    // << endl;
  //  RCLCPP_INFO(this->get_logger(), ss.str().c_str());
  //  rclcpp::shutdown();
  }

}  //

RCLCPP_COMPONENTS_REGISTER_NODE(BT_leaf_nodes_clients::BTNodeClient)
