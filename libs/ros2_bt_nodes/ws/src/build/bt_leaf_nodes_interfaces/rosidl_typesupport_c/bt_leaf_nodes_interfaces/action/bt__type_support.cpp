// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from bt_leaf_nodes_interfaces:action/BT.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "bt_leaf_nodes_interfaces/action/detail/bt__struct.h"
#include "bt_leaf_nodes_interfaces/action/detail/bt__type_support.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace bt_leaf_nodes_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _BT_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _BT_Goal_type_support_ids_t;

static const _BT_Goal_type_support_ids_t _BT_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _BT_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _BT_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _BT_Goal_type_support_symbol_names_t _BT_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, bt_leaf_nodes_interfaces, action, BT_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bt_leaf_nodes_interfaces, action, BT_Goal)),
  }
};

typedef struct _BT_Goal_type_support_data_t
{
  void * data[2];
} _BT_Goal_type_support_data_t;

static _BT_Goal_type_support_data_t _BT_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _BT_Goal_message_typesupport_map = {
  2,
  "bt_leaf_nodes_interfaces",
  &_BT_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_BT_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_BT_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t BT_Goal_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_BT_Goal_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace bt_leaf_nodes_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, bt_leaf_nodes_interfaces, action, BT_Goal)() {
  return &::bt_leaf_nodes_interfaces::action::rosidl_typesupport_c::BT_Goal_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "bt_leaf_nodes_interfaces/action/detail/bt__struct.h"
// already included above
// #include "bt_leaf_nodes_interfaces/action/detail/bt__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace bt_leaf_nodes_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _BT_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _BT_Result_type_support_ids_t;

static const _BT_Result_type_support_ids_t _BT_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _BT_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _BT_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _BT_Result_type_support_symbol_names_t _BT_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, bt_leaf_nodes_interfaces, action, BT_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bt_leaf_nodes_interfaces, action, BT_Result)),
  }
};

typedef struct _BT_Result_type_support_data_t
{
  void * data[2];
} _BT_Result_type_support_data_t;

static _BT_Result_type_support_data_t _BT_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _BT_Result_message_typesupport_map = {
  2,
  "bt_leaf_nodes_interfaces",
  &_BT_Result_message_typesupport_ids.typesupport_identifier[0],
  &_BT_Result_message_typesupport_symbol_names.symbol_name[0],
  &_BT_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t BT_Result_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_BT_Result_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace bt_leaf_nodes_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, bt_leaf_nodes_interfaces, action, BT_Result)() {
  return &::bt_leaf_nodes_interfaces::action::rosidl_typesupport_c::BT_Result_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "bt_leaf_nodes_interfaces/action/detail/bt__struct.h"
// already included above
// #include "bt_leaf_nodes_interfaces/action/detail/bt__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace bt_leaf_nodes_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _BT_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _BT_Feedback_type_support_ids_t;

static const _BT_Feedback_type_support_ids_t _BT_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _BT_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _BT_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _BT_Feedback_type_support_symbol_names_t _BT_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, bt_leaf_nodes_interfaces, action, BT_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bt_leaf_nodes_interfaces, action, BT_Feedback)),
  }
};

typedef struct _BT_Feedback_type_support_data_t
{
  void * data[2];
} _BT_Feedback_type_support_data_t;

static _BT_Feedback_type_support_data_t _BT_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _BT_Feedback_message_typesupport_map = {
  2,
  "bt_leaf_nodes_interfaces",
  &_BT_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_BT_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_BT_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t BT_Feedback_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_BT_Feedback_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace bt_leaf_nodes_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, bt_leaf_nodes_interfaces, action, BT_Feedback)() {
  return &::bt_leaf_nodes_interfaces::action::rosidl_typesupport_c::BT_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "bt_leaf_nodes_interfaces/action/detail/bt__struct.h"
// already included above
// #include "bt_leaf_nodes_interfaces/action/detail/bt__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace bt_leaf_nodes_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _BT_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _BT_SendGoal_Request_type_support_ids_t;

static const _BT_SendGoal_Request_type_support_ids_t _BT_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _BT_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _BT_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _BT_SendGoal_Request_type_support_symbol_names_t _BT_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, bt_leaf_nodes_interfaces, action, BT_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bt_leaf_nodes_interfaces, action, BT_SendGoal_Request)),
  }
};

typedef struct _BT_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _BT_SendGoal_Request_type_support_data_t;

static _BT_SendGoal_Request_type_support_data_t _BT_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _BT_SendGoal_Request_message_typesupport_map = {
  2,
  "bt_leaf_nodes_interfaces",
  &_BT_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_BT_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_BT_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t BT_SendGoal_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_BT_SendGoal_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace bt_leaf_nodes_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, bt_leaf_nodes_interfaces, action, BT_SendGoal_Request)() {
  return &::bt_leaf_nodes_interfaces::action::rosidl_typesupport_c::BT_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "bt_leaf_nodes_interfaces/action/detail/bt__struct.h"
// already included above
// #include "bt_leaf_nodes_interfaces/action/detail/bt__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace bt_leaf_nodes_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _BT_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _BT_SendGoal_Response_type_support_ids_t;

static const _BT_SendGoal_Response_type_support_ids_t _BT_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _BT_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _BT_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _BT_SendGoal_Response_type_support_symbol_names_t _BT_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, bt_leaf_nodes_interfaces, action, BT_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bt_leaf_nodes_interfaces, action, BT_SendGoal_Response)),
  }
};

typedef struct _BT_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _BT_SendGoal_Response_type_support_data_t;

static _BT_SendGoal_Response_type_support_data_t _BT_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _BT_SendGoal_Response_message_typesupport_map = {
  2,
  "bt_leaf_nodes_interfaces",
  &_BT_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_BT_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_BT_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t BT_SendGoal_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_BT_SendGoal_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace bt_leaf_nodes_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, bt_leaf_nodes_interfaces, action, BT_SendGoal_Response)() {
  return &::bt_leaf_nodes_interfaces::action::rosidl_typesupport_c::BT_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "bt_leaf_nodes_interfaces/action/detail/bt__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace bt_leaf_nodes_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _BT_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _BT_SendGoal_type_support_ids_t;

static const _BT_SendGoal_type_support_ids_t _BT_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _BT_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _BT_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _BT_SendGoal_type_support_symbol_names_t _BT_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, bt_leaf_nodes_interfaces, action, BT_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bt_leaf_nodes_interfaces, action, BT_SendGoal)),
  }
};

typedef struct _BT_SendGoal_type_support_data_t
{
  void * data[2];
} _BT_SendGoal_type_support_data_t;

static _BT_SendGoal_type_support_data_t _BT_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _BT_SendGoal_service_typesupport_map = {
  2,
  "bt_leaf_nodes_interfaces",
  &_BT_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_BT_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_BT_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t BT_SendGoal_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_BT_SendGoal_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace bt_leaf_nodes_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, bt_leaf_nodes_interfaces, action, BT_SendGoal)() {
  return &::bt_leaf_nodes_interfaces::action::rosidl_typesupport_c::BT_SendGoal_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "bt_leaf_nodes_interfaces/action/detail/bt__struct.h"
// already included above
// #include "bt_leaf_nodes_interfaces/action/detail/bt__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace bt_leaf_nodes_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _BT_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _BT_GetResult_Request_type_support_ids_t;

static const _BT_GetResult_Request_type_support_ids_t _BT_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _BT_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _BT_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _BT_GetResult_Request_type_support_symbol_names_t _BT_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, bt_leaf_nodes_interfaces, action, BT_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bt_leaf_nodes_interfaces, action, BT_GetResult_Request)),
  }
};

typedef struct _BT_GetResult_Request_type_support_data_t
{
  void * data[2];
} _BT_GetResult_Request_type_support_data_t;

static _BT_GetResult_Request_type_support_data_t _BT_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _BT_GetResult_Request_message_typesupport_map = {
  2,
  "bt_leaf_nodes_interfaces",
  &_BT_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_BT_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_BT_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t BT_GetResult_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_BT_GetResult_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace bt_leaf_nodes_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, bt_leaf_nodes_interfaces, action, BT_GetResult_Request)() {
  return &::bt_leaf_nodes_interfaces::action::rosidl_typesupport_c::BT_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "bt_leaf_nodes_interfaces/action/detail/bt__struct.h"
// already included above
// #include "bt_leaf_nodes_interfaces/action/detail/bt__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace bt_leaf_nodes_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _BT_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _BT_GetResult_Response_type_support_ids_t;

static const _BT_GetResult_Response_type_support_ids_t _BT_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _BT_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _BT_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _BT_GetResult_Response_type_support_symbol_names_t _BT_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, bt_leaf_nodes_interfaces, action, BT_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bt_leaf_nodes_interfaces, action, BT_GetResult_Response)),
  }
};

typedef struct _BT_GetResult_Response_type_support_data_t
{
  void * data[2];
} _BT_GetResult_Response_type_support_data_t;

static _BT_GetResult_Response_type_support_data_t _BT_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _BT_GetResult_Response_message_typesupport_map = {
  2,
  "bt_leaf_nodes_interfaces",
  &_BT_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_BT_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_BT_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t BT_GetResult_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_BT_GetResult_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace bt_leaf_nodes_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, bt_leaf_nodes_interfaces, action, BT_GetResult_Response)() {
  return &::bt_leaf_nodes_interfaces::action::rosidl_typesupport_c::BT_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "bt_leaf_nodes_interfaces/action/detail/bt__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace bt_leaf_nodes_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _BT_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _BT_GetResult_type_support_ids_t;

static const _BT_GetResult_type_support_ids_t _BT_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _BT_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _BT_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _BT_GetResult_type_support_symbol_names_t _BT_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, bt_leaf_nodes_interfaces, action, BT_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bt_leaf_nodes_interfaces, action, BT_GetResult)),
  }
};

typedef struct _BT_GetResult_type_support_data_t
{
  void * data[2];
} _BT_GetResult_type_support_data_t;

static _BT_GetResult_type_support_data_t _BT_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _BT_GetResult_service_typesupport_map = {
  2,
  "bt_leaf_nodes_interfaces",
  &_BT_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_BT_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_BT_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t BT_GetResult_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_BT_GetResult_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace bt_leaf_nodes_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, bt_leaf_nodes_interfaces, action, BT_GetResult)() {
  return &::bt_leaf_nodes_interfaces::action::rosidl_typesupport_c::BT_GetResult_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "bt_leaf_nodes_interfaces/action/detail/bt__struct.h"
// already included above
// #include "bt_leaf_nodes_interfaces/action/detail/bt__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace bt_leaf_nodes_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _BT_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _BT_FeedbackMessage_type_support_ids_t;

static const _BT_FeedbackMessage_type_support_ids_t _BT_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _BT_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _BT_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _BT_FeedbackMessage_type_support_symbol_names_t _BT_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, bt_leaf_nodes_interfaces, action, BT_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bt_leaf_nodes_interfaces, action, BT_FeedbackMessage)),
  }
};

typedef struct _BT_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _BT_FeedbackMessage_type_support_data_t;

static _BT_FeedbackMessage_type_support_data_t _BT_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _BT_FeedbackMessage_message_typesupport_map = {
  2,
  "bt_leaf_nodes_interfaces",
  &_BT_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_BT_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_BT_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t BT_FeedbackMessage_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_BT_FeedbackMessage_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace bt_leaf_nodes_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, bt_leaf_nodes_interfaces, action, BT_FeedbackMessage)() {
  return &::bt_leaf_nodes_interfaces::action::rosidl_typesupport_c::BT_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "action_msgs/msg/goal_status_array.h"
#include "action_msgs/srv/cancel_goal.h"
#include "bt_leaf_nodes_interfaces/action/bt.h"
// already included above
// #include "bt_leaf_nodes_interfaces/action/detail/bt__type_support.h"

static rosidl_action_type_support_t _bt_leaf_nodes_interfaces__action__BT__typesupport_c;

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(
  rosidl_typesupport_c, bt_leaf_nodes_interfaces, action, BT)()
{
  // Thread-safe by always writing the same values to the static struct
  _bt_leaf_nodes_interfaces__action__BT__typesupport_c.goal_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, bt_leaf_nodes_interfaces, action, BT_SendGoal)();
  _bt_leaf_nodes_interfaces__action__BT__typesupport_c.result_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, bt_leaf_nodes_interfaces, action, BT_GetResult)();
  _bt_leaf_nodes_interfaces__action__BT__typesupport_c.cancel_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, srv, CancelGoal)();
  _bt_leaf_nodes_interfaces__action__BT__typesupport_c.feedback_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, bt_leaf_nodes_interfaces, action, BT_FeedbackMessage)();
  _bt_leaf_nodes_interfaces__action__BT__typesupport_c.status_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, msg, GoalStatusArray)();

  return &_bt_leaf_nodes_interfaces__action__BT__typesupport_c;
}

#ifdef __cplusplus
}
#endif
