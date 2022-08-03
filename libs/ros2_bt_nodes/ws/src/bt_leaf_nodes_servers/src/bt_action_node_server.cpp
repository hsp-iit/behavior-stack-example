#include <functional>
#include <memory>
#include <thread>

#include "bt_leaf_nodes_interfaces/action/bt.hpp"
#include "rclcpp/rclcpp.hpp"
#include "rclcpp_action/rclcpp_action.hpp"
#include "rclcpp_components/register_node_macro.hpp"

//#include "action_tutorials_cpp/visibility_control.h"

namespace BT_leaf_nodes_servers
{
class BTNodeServer : public rclcpp::Node
{
public:
  using BT = bt_leaf_nodes_interfaces::action::BT;
  using GoalHandleBT = rclcpp_action::ServerGoalHandle<BT>;

//  BT_LEAF_NODES_SERVERS_PUBLIC
  explicit BTNodeServer(const rclcpp::NodeOptions & options = rclcpp::NodeOptions())
  : Node("BT_node_server", options)
  {
    using namespace std::placeholders;

    this->node_server_ = rclcpp_action::create_server<BT>(
      this,
      "BTNode",
      std::bind(&BTNodeServer::handle_goal, this, _1, _2),
      std::bind(&BTNodeServer::handle_cancel, this, _1),
      std::bind(&BTNodeServer::handle_accepted, this, _1));
  }

private:
  rclcpp_action::Server<BT>::SharedPtr node_server_;

  rclcpp_action::GoalResponse handle_goal(
    const rclcpp_action::GoalUUID & uuid,
    std::shared_ptr<const BT::Goal> goal)
  {
    RCLCPP_INFO(this->get_logger(), "Received goal request with order %d", goal->command);
    (void)uuid;
    return rclcpp_action::GoalResponse::ACCEPT_AND_EXECUTE;
  }

  rclcpp_action::CancelResponse handle_cancel(
    const std::shared_ptr<GoalHandleBT> goal_handle)
  {
    RCLCPP_INFO(this->get_logger(), "Received request to cancel goal");
    (void)goal_handle;
    return rclcpp_action::CancelResponse::ACCEPT;
  }

  void handle_accepted(const std::shared_ptr<GoalHandleBT> goal_handle)
  {
    using namespace std::placeholders;
    // this needs to return quickly to avoid blocking the executor, so spin up a new thread
    std::thread{std::bind(&BTNodeServer::execute, this, _1), goal_handle}.detach();
  }

  void execute(const std::shared_ptr<GoalHandleBT> goal_handle)
  {
    RCLCPP_INFO(this->get_logger(), "Executing goal");

    const auto goal = goal_handle->get_goal();
    auto feedback = std::make_shared<BT::Feedback>();
    auto result = std::make_shared<BT::Result>();
    goal_handle->publish_feedback(feedback);
    RCLCPP_INFO(this->get_logger(), "Node Started");
    int tick_result = tick();
    goal_handle->succeed(tick_result);
    RCLCPP_INFO(this->get_logger(), "Node succeeded");
    }


  }

  int tick(){
    rclcpp::Rate loop_rate(1);
    RCLCPP_INFO(this->get_logger(), "Node Ticked");
    loop_rate.sleep();

    return 1;
  }

};

}

RCLCPP_COMPONENTS_REGISTER_NODE(BT_leaf_nodes_servers::BTNodeServer)
