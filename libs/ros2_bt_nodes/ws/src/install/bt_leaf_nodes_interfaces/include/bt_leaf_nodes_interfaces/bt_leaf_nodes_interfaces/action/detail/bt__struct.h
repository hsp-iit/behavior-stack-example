// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bt_leaf_nodes_interfaces:action/BT.idl
// generated code does not contain a copyright notice

#ifndef BT_LEAF_NODES_INTERFACES__ACTION__DETAIL__BT__STRUCT_H_
#define BT_LEAF_NODES_INTERFACES__ACTION__DETAIL__BT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/BT in the package bt_leaf_nodes_interfaces.
typedef struct bt_leaf_nodes_interfaces__action__BT_Goal
{
  /// Request (tick or halt)
  int32_t command;
} bt_leaf_nodes_interfaces__action__BT_Goal;

// Struct for a sequence of bt_leaf_nodes_interfaces__action__BT_Goal.
typedef struct bt_leaf_nodes_interfaces__action__BT_Goal__Sequence
{
  bt_leaf_nodes_interfaces__action__BT_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bt_leaf_nodes_interfaces__action__BT_Goal__Sequence;


// Constants defined in the message

/// Struct defined in action/BT in the package bt_leaf_nodes_interfaces.
typedef struct bt_leaf_nodes_interfaces__action__BT_Result
{
  /// Result (running, success, failure)
  int32_t final_return_status;
} bt_leaf_nodes_interfaces__action__BT_Result;

// Struct for a sequence of bt_leaf_nodes_interfaces__action__BT_Result.
typedef struct bt_leaf_nodes_interfaces__action__BT_Result__Sequence
{
  bt_leaf_nodes_interfaces__action__BT_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bt_leaf_nodes_interfaces__action__BT_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/BT in the package bt_leaf_nodes_interfaces.
typedef struct bt_leaf_nodes_interfaces__action__BT_Feedback
{
  /// Feedback (running, success, failure)
  int32_t current_return_status;
} bt_leaf_nodes_interfaces__action__BT_Feedback;

// Struct for a sequence of bt_leaf_nodes_interfaces__action__BT_Feedback.
typedef struct bt_leaf_nodes_interfaces__action__BT_Feedback__Sequence
{
  bt_leaf_nodes_interfaces__action__BT_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bt_leaf_nodes_interfaces__action__BT_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "bt_leaf_nodes_interfaces/action/detail/bt__struct.h"

/// Struct defined in action/BT in the package bt_leaf_nodes_interfaces.
typedef struct bt_leaf_nodes_interfaces__action__BT_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  bt_leaf_nodes_interfaces__action__BT_Goal goal;
} bt_leaf_nodes_interfaces__action__BT_SendGoal_Request;

// Struct for a sequence of bt_leaf_nodes_interfaces__action__BT_SendGoal_Request.
typedef struct bt_leaf_nodes_interfaces__action__BT_SendGoal_Request__Sequence
{
  bt_leaf_nodes_interfaces__action__BT_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bt_leaf_nodes_interfaces__action__BT_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/BT in the package bt_leaf_nodes_interfaces.
typedef struct bt_leaf_nodes_interfaces__action__BT_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} bt_leaf_nodes_interfaces__action__BT_SendGoal_Response;

// Struct for a sequence of bt_leaf_nodes_interfaces__action__BT_SendGoal_Response.
typedef struct bt_leaf_nodes_interfaces__action__BT_SendGoal_Response__Sequence
{
  bt_leaf_nodes_interfaces__action__BT_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bt_leaf_nodes_interfaces__action__BT_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/BT in the package bt_leaf_nodes_interfaces.
typedef struct bt_leaf_nodes_interfaces__action__BT_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} bt_leaf_nodes_interfaces__action__BT_GetResult_Request;

// Struct for a sequence of bt_leaf_nodes_interfaces__action__BT_GetResult_Request.
typedef struct bt_leaf_nodes_interfaces__action__BT_GetResult_Request__Sequence
{
  bt_leaf_nodes_interfaces__action__BT_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bt_leaf_nodes_interfaces__action__BT_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "bt_leaf_nodes_interfaces/action/detail/bt__struct.h"

/// Struct defined in action/BT in the package bt_leaf_nodes_interfaces.
typedef struct bt_leaf_nodes_interfaces__action__BT_GetResult_Response
{
  int8_t status;
  bt_leaf_nodes_interfaces__action__BT_Result result;
} bt_leaf_nodes_interfaces__action__BT_GetResult_Response;

// Struct for a sequence of bt_leaf_nodes_interfaces__action__BT_GetResult_Response.
typedef struct bt_leaf_nodes_interfaces__action__BT_GetResult_Response__Sequence
{
  bt_leaf_nodes_interfaces__action__BT_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bt_leaf_nodes_interfaces__action__BT_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "bt_leaf_nodes_interfaces/action/detail/bt__struct.h"

/// Struct defined in action/BT in the package bt_leaf_nodes_interfaces.
typedef struct bt_leaf_nodes_interfaces__action__BT_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  bt_leaf_nodes_interfaces__action__BT_Feedback feedback;
} bt_leaf_nodes_interfaces__action__BT_FeedbackMessage;

// Struct for a sequence of bt_leaf_nodes_interfaces__action__BT_FeedbackMessage.
typedef struct bt_leaf_nodes_interfaces__action__BT_FeedbackMessage__Sequence
{
  bt_leaf_nodes_interfaces__action__BT_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bt_leaf_nodes_interfaces__action__BT_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BT_LEAF_NODES_INTERFACES__ACTION__DETAIL__BT__STRUCT_H_
