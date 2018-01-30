cmake_minimum_required(VERSION 3.9)
project(ProtobufRangeType)

set(CMAKE_CXX_STANDARD 11)

find_package(Protobuf REQUIRED)
#include_directories(${Protobuf_INCLUDE_DIRS})
#include_directories(${CMAKE_CURRENT_BINARY_DIR})
#protobuf_generate_cpp(PROTO_SRCS PROTO_HDRS foo.proto)
#protobuf_generate_cpp(PROTO_SRCS PROTO_HDRS EXPORT_MACRO DLL_EXPORT foo.proto)
#protobuf_generate_python(PROTO_PY foo.proto)
#add_executable(bar bar.cc ${PROTO_SRCS} ${PROTO_HDRS})
add_executable(ProtobufRangeType main.cpp ${PROTO_SRCS} ${PROTO_HDRS} repeated_field.h)
target_link_libraries(ProtobufRangeType ${Protobuf_LIBRARIES})

