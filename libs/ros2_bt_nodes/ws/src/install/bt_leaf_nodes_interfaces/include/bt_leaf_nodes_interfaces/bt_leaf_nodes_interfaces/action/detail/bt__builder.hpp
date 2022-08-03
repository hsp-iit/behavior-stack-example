// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bt_leaf_nodes_interfaces:action/BT.idl
// generated code does not contain a copyright notice

#ifndef BT_LEAF_NODES_INTERFACES__ACTION__DETAIL__BT__BUILDER_HPP_
#define BT_LEAF_NODES_INTERFACES__ACTION__DETAIL__BT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bt_leaf_nodes_interfaces/action/detail/bt__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bt_leaf_nodes_interfaces
{

namespace action
{

namespace builder
{

class Init_BT_Goal_command
{
public:
  Init_BT_Goal_command()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::bt_leaf_nodes_interfaces::action::BT_Goal command(::bt_leaf_nodes_interfaces::action::BT_Goal::_command_type arg)
  {
    msg_.command = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bt_leaf_nodes_interfaces::action::BT_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::bt_leaf_nodes_interfaces::action::BT_Goal>()
{
  return bt_leaf_nodes_interfaces::action::builder::Init_BT_Goal_command();
}

}  // namespace bt_leaf_nodes_interfaces


namespace bt_leaf_nodes_interfaces
{

namespace action
{

namespace builder
{

class Init_BT_Result_final_return_status
{
public:
  Init_BT_Result_final_return_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::bt_leaf_nodes_interfaces::action::BT_Result final_return_status(::bt_leaf_nodes_interfaces::action::BT_Result::_final_return_status_type arg)
  {
    msg_.final_return_status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bt_leaf_nodes_interfaces::action::BT_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::bt_leaf_nodes_interfaces::action::BT_Result>()
{
  return bt_leaf_nodes_interfaces::action::builder::Init_BT_Result_final_return_status();
}

}  // namespace bt_leaf_nodes_interfaces


namespace bt_leaf_nodes_interfaces
{

namespace action
{

namespace builder
{

class Init_BT_Feedback_current_return_status
{
public:
  Init_BT_Feedback_current_return_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::bt_leaf_nodes_interfaces::action::BT_Feedback current_return_status(::bt_leaf_nodes_interfaces::action::BT_Feedback::_current_return_status_type arg)
  {
    msg_.current_return_status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bt_leaf_nodes_interfaces::action::BT_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::bt_leaf_nodes_interfaces::action::BT_Feedback>()
{
  return bt_leaf_nodes_interfaces::action::builder::Init_BT_Feedback_current_return_status();
}

}  // namespace bt_leaf_nodes_interfaces


namespace bt_leaf_nodes_interfaces
{

namespace action
{

namespace builder
{

class Init_BT_SendGoal_Request_goal
{
public:
  explicit Init_BT_SendGoal_Request_goal(::bt_leaf_nodes_interfaces::action::BT_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::bt_leaf_nodes_interfaces::action::BT_SendGoal_Request goal(::bt_leaf_nodes_interfaces::action::BT_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bt_leaf_nodes_interfaces::action::BT_SendGoal_Request msg_;
};

class Init_BT_SendGoal_Request_goal_id
{
public:
  Init_BT_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BT_SendGoal_Request_goal goal_id(::bt_leaf_nodes_interfaces::action::BT_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_BT_SendGoal_Request_goal(msg_);
  }

private:
  ::bt_leaf_nodes_interfaces::action::BT_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::bt_leaf_nodes_interfaces::action::BT_SendGoal_Request>()
{
  return bt_leaf_nodes_interfaces::action::builder::Init_BT_SendGoal_Request_goal_id();
}

}  // namespace bt_leaf_nodes_interfaces


namespace bt_leaf_nodes_interfaces
{

namespace action
{

namespace builder
{

class Init_BT_SendGoal_Response_stamp
{
public:
  explicit Init_BT_SendGoal_Response_stamp(::bt_leaf_nodes_interfaces::action::BT_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::bt_leaf_nodes_interfaces::action::BT_SendGoal_Response stamp(::bt_leaf_nodes_interfaces::action::BT_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bt_leaf_nodes_interfaces::action::BT_SendGoal_Response msg_;
};

class Init_BT_SendGoal_Response_accepted
{
public:
  Init_BT_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BT_SendGoal_Response_stamp accepted(::bt_leaf_nodes_interfaces::action::BT_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_BT_SendGoal_Response_stamp(msg_);
  }

private:
  ::bt_leaf_nodes_interfaces::action::BT_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::bt_leaf_nodes_interfaces::action::BT_SendGoal_Response>()
{
  return bt_leaf_nodes_interfaces::action::builder::Init_BT_SendGoal_Response_accepted();
}

}  // namespace bt_leaf_nodes_interfaces


namespace bt_leaf_nodes_interfaces
{

namespace action
{

namespace builder
{

class Init_BT_GetResult_Request_goal_id
{
public:
  Init_BT_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::bt_leaf_nodes_interfaces::action::BT_GetResult_Request goal_id(::bt_leaf_nodes_interfaces::action::BT_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bt_leaf_nodes_interfaces::action::BT_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::bt_leaf_nodes_interfaces::action::BT_GetResult_Request>()
{
  return bt_leaf_nodes_interfaces::action::builder::Init_BT_GetResult_Request_goal_id();
}

}  // namespace bt_leaf_nodes_interfaces


namespace bt_leaf_nodes_interfaces
{

namespace action
{

namespace builder
{

class Init_BT_GetResult_Response_result
{
public:
  explicit Init_BT_GetResult_Response_result(::bt_leaf_nodes_interfaces::action::BT_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::bt_leaf_nodes_interfaces::action::BT_GetResult_Response result(::bt_leaf_nodes_interfaces::action::BT_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bt_leaf_nodes_interfaces::action::BT_GetResult_Response msg_;
};

class Init_BT_GetResult_Response_status
{
public:
  Init_BT_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BT_GetResult_Response_result status(::bt_leaf_nodes_interfaces::action::BT_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_BT_GetResult_Response_result(msg_);
  }

private:
  ::bt_leaf_nodes_interfaces::action::BT_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::bt_leaf_nodes_interfaces::action::BT_GetResult_Response>()
{
  return bt_leaf_nodes_interfaces::action::builder::Init_BT_GetResult_Response_status();
}

}  // namespace bt_leaf_nodes_interfaces


namespace bt_leaf_nodes_interfaces
{

namespace action
{

namespace builder
{

class Init_BT_FeedbackMessage_feedback
{
public:
  explicit Init_BT_FeedbackMessage_feedback(::bt_leaf_nodes_interfaces::action::BT_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::bt_leaf_nodes_interfaces::action::BT_FeedbackMessage feedback(::bt_leaf_nodes_interfaces::action::BT_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bt_leaf_nodes_interfaces::action::BT_FeedbackMessage msg_;
};

class Init_BT_FeedbackMessage_goal_id
{
public:
  Init_BT_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BT_FeedbackMessage_feedback goal_id(::bt_leaf_nodes_interfaces::action::BT_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_BT_FeedbackMessage_feedback(msg_);
  }

private:
  ::bt_leaf_nodes_interfaces::action::BT_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::bt_leaf_nodes_interfaces::action::BT_FeedbackMessage>()
{
  return bt_leaf_nodes_interfaces::action::builder::Init_BT_FeedbackMessage_goal_id();
}

}  // namespace bt_leaf_nodes_interfaces

#endif  // BT_LEAF_NODES_INTERFACES__ACTION__DETAIL__BT__BUILDER_HPP_
