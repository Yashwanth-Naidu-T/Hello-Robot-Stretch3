// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from speech_recognition_msgs:msg/SpeechRecognitionCandidates.idl
// generated code does not contain a copyright notice
#include "speech_recognition_msgs/msg/detail/speech_recognition_candidates__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "speech_recognition_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "speech_recognition_msgs/msg/detail/speech_recognition_candidates__struct.h"
#include "speech_recognition_msgs/msg/detail/speech_recognition_candidates__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/primitives_sequence.h"  // confidence
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // confidence
#include "rosidl_runtime_c/string.h"  // transcript
#include "rosidl_runtime_c/string_functions.h"  // transcript

// forward declare type support functions


using _SpeechRecognitionCandidates__ros_msg_type = speech_recognition_msgs__msg__SpeechRecognitionCandidates;

static bool _SpeechRecognitionCandidates__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SpeechRecognitionCandidates__ros_msg_type * ros_message = static_cast<const _SpeechRecognitionCandidates__ros_msg_type *>(untyped_ros_message);
  // Field name: transcript
  {
    size_t size = ros_message->transcript.size;
    auto array_ptr = ros_message->transcript.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
      if (str->capacity == 0 || str->capacity <= str->size) {
        fprintf(stderr, "string capacity not greater than size\n");
        return false;
      }
      if (str->data[str->size] != '\0') {
        fprintf(stderr, "string not null-terminated\n");
        return false;
      }
      cdr << str->data;
    }
  }

  // Field name: confidence
  {
    size_t size = ros_message->confidence.size;
    auto array_ptr = ros_message->confidence.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _SpeechRecognitionCandidates__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SpeechRecognitionCandidates__ros_msg_type * ros_message = static_cast<_SpeechRecognitionCandidates__ros_msg_type *>(untyped_ros_message);
  // Field name: transcript
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->transcript.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->transcript);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->transcript, size)) {
      fprintf(stderr, "failed to create array for field 'transcript'");
      return false;
    }
    auto array_ptr = ros_message->transcript.data;
    for (size_t i = 0; i < size; ++i) {
      std::string tmp;
      cdr >> tmp;
      auto & ros_i = array_ptr[i];
      if (!ros_i.data) {
        rosidl_runtime_c__String__init(&ros_i);
      }
      bool succeeded = rosidl_runtime_c__String__assign(
        &ros_i,
        tmp.c_str());
      if (!succeeded) {
        fprintf(stderr, "failed to assign string into field 'transcript'\n");
        return false;
      }
    }
  }

  // Field name: confidence
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->confidence.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->confidence);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->confidence, size)) {
      fprintf(stderr, "failed to create array for field 'confidence'");
      return false;
    }
    auto array_ptr = ros_message->confidence.data;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_speech_recognition_msgs
size_t get_serialized_size_speech_recognition_msgs__msg__SpeechRecognitionCandidates(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SpeechRecognitionCandidates__ros_msg_type * ros_message = static_cast<const _SpeechRecognitionCandidates__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name transcript
  {
    size_t array_size = ros_message->transcript.size;
    auto array_ptr = ros_message->transcript.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }
  // field.name confidence
  {
    size_t array_size = ros_message->confidence.size;
    auto array_ptr = ros_message->confidence.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SpeechRecognitionCandidates__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_speech_recognition_msgs__msg__SpeechRecognitionCandidates(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_speech_recognition_msgs
size_t max_serialized_size_speech_recognition_msgs__msg__SpeechRecognitionCandidates(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: transcript
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: confidence
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = speech_recognition_msgs__msg__SpeechRecognitionCandidates;
    is_plain =
      (
      offsetof(DataType, confidence) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _SpeechRecognitionCandidates__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_speech_recognition_msgs__msg__SpeechRecognitionCandidates(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SpeechRecognitionCandidates = {
  "speech_recognition_msgs::msg",
  "SpeechRecognitionCandidates",
  _SpeechRecognitionCandidates__cdr_serialize,
  _SpeechRecognitionCandidates__cdr_deserialize,
  _SpeechRecognitionCandidates__get_serialized_size,
  _SpeechRecognitionCandidates__max_serialized_size
};

static rosidl_message_type_support_t _SpeechRecognitionCandidates__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SpeechRecognitionCandidates,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, speech_recognition_msgs, msg, SpeechRecognitionCandidates)() {
  return &_SpeechRecognitionCandidates__type_support;
}

#if defined(__cplusplus)
}
#endif
