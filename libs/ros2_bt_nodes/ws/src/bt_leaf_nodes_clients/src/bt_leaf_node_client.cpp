#include <functional>
#include <future>
#include <memory>
#include <string>
#include <sstream>

#include "bt_leaf_nodes_interfaces/action/bt.hpp"

#include "rclcpp/rclcpp.hpp"
#include "rclcpp_action/rclcpp_action.hpp"
#include "rclcpp_components/register_node_macro.hpp"

namespace BT_leaf_nodes_clients
{
class BTNodeClient : public rclcpp::Node
{
public:
  using BT = bt_leaf_nodes_interfaces::action::BT;
  using GoalHandleBT= rclcpp_action::ClientGoalHandle<BT>;

  explicit BTNodeClient(const rclcpp::NodeOptions & options)
  : Node("bt_leaf_node_client", options)
  {
    this->client_ptr_ = rclcpp_action::create_client<BT>(
      this,
      "BT");

    this->timer_ = this->create_wall_timer(
      std::chrono::milliseconds(500),
      std::bind(&BTNodeClient::send_goal, this));
  }

  void send_goal()
  {
    using namespace std::placeholders;

    this->timer_->cancel();

    if (!this->client_ptr_->wait_for_action_server()) {
      RCLCPP_ERROR(this->get_logger(), "Action server not available after waiting");
      rclcpp::shutdown();
    }

    auto goal_msg = BT::Goal();
    goal_msg.command = 10;

    RCLCPP_INFO(this->get_logger(), "Sending goal");

    auto send_goal_options = rclcpp_action::Client<BT>::SendGoalOptions();
    send_goal_options.goal_response_callback =
      std::bind(&BTNodeClient::goal_response_callback, this, _1);
    send_goal_options.feedback_callback =
      std::bind(&BTNodeClient::feedback_callback, this, _1, _2);
    send_goal_options.result_callback =
      std::bind(&BTNodeClient::result_callback, this, _1);
    this->client_ptr_->async_send_goal(goal_msg, send_goal_options);
  }

private:
  rclcpp_action::Client<BT>::SharedPtr client_ptr_;
  rclcpp::TimerBase::SharedPtr timer_;

  void goal_response_callback(const GoalHandleBT::SharedPtr & goal_handle)
  {
    if (!goal_handle) {
      RCLCPP_ERROR(this->get_logger(), "Goal was rejected by server");
    } else {
      RCLCPP_INFO(this->get_logger(), "Goal accepted by server, waiting for result");
    }
  }

  void feedback_callback(
    GoalHandleBT::SharedPtr,
    const std::shared_ptr<const BT::Feedback> feedback)
  {
    // std::stringstream ss;
    // ss << "Next number in sequence received: ";
    // for (auto number : feedback->current_return_status) {
    //   ss << number << " ";
    // }
    // RCLCPP_INFO(this->get_logger(), ss.str().c_str());
  }

  void result_callback(const GoalHandleBT::WrappedResult & result)
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
    rclcpp::shutdown();
  }
};  // class BTNodeClient

}  // namespace BT_leaf_nodes_servers

RCLCPP_COMPONENTS_REGISTER_NODE(BT_leaf_nodes_clients::BTNodeClient)
