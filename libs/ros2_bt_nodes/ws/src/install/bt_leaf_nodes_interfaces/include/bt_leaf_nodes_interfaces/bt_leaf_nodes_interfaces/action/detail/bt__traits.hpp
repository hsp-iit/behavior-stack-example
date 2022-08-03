// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bt_leaf_nodes_interfaces:action/BT.idl
// generated code does not contain a copyright notice

#ifndef BT_LEAF_NODES_INTERFACES__ACTION__DETAIL__BT__TRAITS_HPP_
#define BT_LEAF_NODES_INTERFACES__ACTION__DETAIL__BT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bt_leaf_nodes_interfaces/action/detail/bt__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace bt_leaf_nodes_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const BT_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: command
  {
    out << "command: ";
    rosidl_generator_traits::value_to_yaml(msg.command, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BT_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: command
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "command: ";
    rosidl_generator_traits::value_to_yaml(msg.command, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BT_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace bt_leaf_nodes_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use bt_leaf_nodes_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const bt_leaf_nodes_interfaces::action::BT_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  bt_leaf_nodes_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bt_leaf_nodes_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const bt_leaf_nodes_interfaces::action::BT_Goal & msg)
{
  return bt_leaf_nodes_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<bt_leaf_nodes_interfaces::action::BT_Goal>()
{
  return "bt_leaf_nodes_interfaces::action::BT_Goal";
}

template<>
inline const char * name<bt_leaf_nodes_interfaces::action::BT_Goal>()
{
  return "bt_leaf_nodes_interfaces/action/BT_Goal";
}

template<>
struct has_fixed_size<bt_leaf_nodes_interfaces::action::BT_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<bt_leaf_nodes_interfaces::action::BT_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<bt_leaf_nodes_interfaces::action::BT_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace bt_leaf_nodes_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const BT_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: final_return_status
  {
    out << "final_return_status: ";
    rosidl_generator_traits::value_to_yaml(msg.final_return_status, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BT_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: final_return_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "final_return_status: ";
    rosidl_generator_traits::value_to_yaml(msg.final_return_status, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BT_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace bt_leaf_nodes_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use bt_leaf_nodes_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const bt_leaf_nodes_interfaces::action::BT_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  bt_leaf_nodes_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bt_leaf_nodes_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const bt_leaf_nodes_interfaces::action::BT_Result & msg)
{
  return bt_leaf_nodes_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<bt_leaf_nodes_interfaces::action::BT_Result>()
{
  return "bt_leaf_nodes_interfaces::action::BT_Result";
}

template<>
inline const char * name<bt_leaf_nodes_interfaces::action::BT_Result>()
{
  return "bt_leaf_nodes_interfaces/action/BT_Result";
}

template<>
struct has_fixed_size<bt_leaf_nodes_interfaces::action::BT_Result>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<bt_leaf_nodes_interfaces::action::BT_Result>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<bt_leaf_nodes_interfaces::action::BT_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace bt_leaf_nodes_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const BT_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: current_return_status
  {
    out << "current_return_status: ";
    rosidl_generator_traits::value_to_yaml(msg.current_return_status, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BT_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: current_return_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_return_status: ";
    rosidl_generator_traits::value_to_yaml(msg.current_return_status, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BT_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace bt_leaf_nodes_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use bt_leaf_nodes_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const bt_leaf_nodes_interfaces::action::BT_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  bt_leaf_nodes_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bt_leaf_nodes_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const bt_leaf_nodes_interfaces::action::BT_Feedback & msg)
{
  return bt_leaf_nodes_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<bt_leaf_nodes_interfaces::action::BT_Feedback>()
{
  return "bt_leaf_nodes_interfaces::action::BT_Feedback";
}

template<>
inline const char * name<bt_leaf_nodes_interfaces::action::BT_Feedback>()
{
  return "bt_leaf_nodes_interfaces/action/BT_Feedback";
}

template<>
struct has_fixed_size<bt_leaf_nodes_interfaces::action::BT_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<bt_leaf_nodes_interfaces::action::BT_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<bt_leaf_nodes_interfaces::action::BT_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "bt_leaf_nodes_interfaces/action/detail/bt__traits.hpp"

namespace bt_leaf_nodes_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const BT_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BT_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BT_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace bt_leaf_nodes_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use bt_leaf_nodes_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const bt_leaf_nodes_interfaces::action::BT_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  bt_leaf_nodes_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bt_leaf_nodes_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const bt_leaf_nodes_interfaces::action::BT_SendGoal_Request & msg)
{
  return bt_leaf_nodes_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<bt_leaf_nodes_interfaces::action::BT_SendGoal_Request>()
{
  return "bt_leaf_nodes_interfaces::action::BT_SendGoal_Request";
}

template<>
inline const char * name<bt_leaf_nodes_interfaces::action::BT_SendGoal_Request>()
{
  return "bt_leaf_nodes_interfaces/action/BT_SendGoal_Request";
}

template<>
struct has_fixed_size<bt_leaf_nodes_interfaces::action::BT_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<bt_leaf_nodes_interfaces::action::BT_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<bt_leaf_nodes_interfaces::action::BT_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<bt_leaf_nodes_interfaces::action::BT_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<bt_leaf_nodes_interfaces::action::BT_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace bt_leaf_nodes_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const BT_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BT_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BT_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace bt_leaf_nodes_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use bt_leaf_nodes_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const bt_leaf_nodes_interfaces::action::BT_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  bt_leaf_nodes_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bt_leaf_nodes_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const bt_leaf_nodes_interfaces::action::BT_SendGoal_Response & msg)
{
  return bt_leaf_nodes_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<bt_leaf_nodes_interfaces::action::BT_SendGoal_Response>()
{
  return "bt_leaf_nodes_interfaces::action::BT_SendGoal_Response";
}

template<>
inline const char * name<bt_leaf_nodes_interfaces::action::BT_SendGoal_Response>()
{
  return "bt_leaf_nodes_interfaces/action/BT_SendGoal_Response";
}

template<>
struct has_fixed_size<bt_leaf_nodes_interfaces::action::BT_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<bt_leaf_nodes_interfaces::action::BT_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<bt_leaf_nodes_interfaces::action::BT_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<bt_leaf_nodes_interfaces::action::BT_SendGoal>()
{
  return "bt_leaf_nodes_interfaces::action::BT_SendGoal";
}

template<>
inline const char * name<bt_leaf_nodes_interfaces::action::BT_SendGoal>()
{
  return "bt_leaf_nodes_interfaces/action/BT_SendGoal";
}

template<>
struct has_fixed_size<bt_leaf_nodes_interfaces::action::BT_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<bt_leaf_nodes_interfaces::action::BT_SendGoal_Request>::value &&
    has_fixed_size<bt_leaf_nodes_interfaces::action::BT_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<bt_leaf_nodes_interfaces::action::BT_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<bt_leaf_nodes_interfaces::action::BT_SendGoal_Request>::value &&
    has_bounded_size<bt_leaf_nodes_interfaces::action::BT_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<bt_leaf_nodes_interfaces::action::BT_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<bt_leaf_nodes_interfaces::action::BT_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<bt_leaf_nodes_interfaces::action::BT_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace bt_leaf_nodes_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const BT_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BT_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BT_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace bt_leaf_nodes_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use bt_leaf_nodes_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const bt_leaf_nodes_interfaces::action::BT_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  bt_leaf_nodes_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bt_leaf_nodes_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const bt_leaf_nodes_interfaces::action::BT_GetResult_Request & msg)
{
  return bt_leaf_nodes_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<bt_leaf_nodes_interfaces::action::BT_GetResult_Request>()
{
  return "bt_leaf_nodes_interfaces::action::BT_GetResult_Request";
}

template<>
inline const char * name<bt_leaf_nodes_interfaces::action::BT_GetResult_Request>()
{
  return "bt_leaf_nodes_interfaces/action/BT_GetResult_Request";
}

template<>
struct has_fixed_size<bt_leaf_nodes_interfaces::action::BT_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<bt_leaf_nodes_interfaces::action::BT_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<bt_leaf_nodes_interfaces::action::BT_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "bt_leaf_nodes_interfaces/action/detail/bt__traits.hpp"

namespace bt_leaf_nodes_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const BT_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BT_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BT_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace bt_leaf_nodes_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use bt_leaf_nodes_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const bt_leaf_nodes_interfaces::action::BT_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  bt_leaf_nodes_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bt_leaf_nodes_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const bt_leaf_nodes_interfaces::action::BT_GetResult_Response & msg)
{
  return bt_leaf_nodes_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<bt_leaf_nodes_interfaces::action::BT_GetResult_Response>()
{
  return "bt_leaf_nodes_interfaces::action::BT_GetResult_Response";
}

template<>
inline const char * name<bt_leaf_nodes_interfaces::action::BT_GetResult_Response>()
{
  return "bt_leaf_nodes_interfaces/action/BT_GetResult_Response";
}

template<>
struct has_fixed_size<bt_leaf_nodes_interfaces::action::BT_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<bt_leaf_nodes_interfaces::action::BT_Result>::value> {};

template<>
struct has_bounded_size<bt_leaf_nodes_interfaces::action::BT_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<bt_leaf_nodes_interfaces::action::BT_Result>::value> {};

template<>
struct is_message<bt_leaf_nodes_interfaces::action::BT_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<bt_leaf_nodes_interfaces::action::BT_GetResult>()
{
  return "bt_leaf_nodes_interfaces::action::BT_GetResult";
}

template<>
inline const char * name<bt_leaf_nodes_interfaces::action::BT_GetResult>()
{
  return "bt_leaf_nodes_interfaces/action/BT_GetResult";
}

template<>
struct has_fixed_size<bt_leaf_nodes_interfaces::action::BT_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<bt_leaf_nodes_interfaces::action::BT_GetResult_Request>::value &&
    has_fixed_size<bt_leaf_nodes_interfaces::action::BT_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<bt_leaf_nodes_interfaces::action::BT_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<bt_leaf_nodes_interfaces::action::BT_GetResult_Request>::value &&
    has_bounded_size<bt_leaf_nodes_interfaces::action::BT_GetResult_Response>::value
  >
{
};

template<>
struct is_service<bt_leaf_nodes_interfaces::action::BT_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<bt_leaf_nodes_interfaces::action::BT_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<bt_leaf_nodes_interfaces::action::BT_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "bt_leaf_nodes_interfaces/action/detail/bt__traits.hpp"

namespace bt_leaf_nodes_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const BT_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BT_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BT_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace bt_leaf_nodes_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use bt_leaf_nodes_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const bt_leaf_nodes_interfaces::action::BT_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  bt_leaf_nodes_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bt_leaf_nodes_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const bt_leaf_nodes_interfaces::action::BT_FeedbackMessage & msg)
{
  return bt_leaf_nodes_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<bt_leaf_nodes_interfaces::action::BT_FeedbackMessage>()
{
  return "bt_leaf_nodes_interfaces::action::BT_FeedbackMessage";
}

template<>
inline const char * name<bt_leaf_nodes_interfaces::action::BT_FeedbackMessage>()
{
  return "bt_leaf_nodes_interfaces/action/BT_FeedbackMessage";
}

template<>
struct has_fixed_size<bt_leaf_nodes_interfaces::action::BT_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<bt_leaf_nodes_interfaces::action::BT_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<bt_leaf_nodes_interfaces::action::BT_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<bt_leaf_nodes_interfaces::action::BT_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<bt_leaf_nodes_interfaces::action::BT_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<bt_leaf_nodes_interfaces::action::BT>
  : std::true_type
{
};

template<>
struct is_action_goal<bt_leaf_nodes_interfaces::action::BT_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<bt_leaf_nodes_interfaces::action::BT_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<bt_leaf_nodes_interfaces::action::BT_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // BT_LEAF_NODES_INTERFACES__ACTION__DETAIL__BT__TRAITS_HPP_
