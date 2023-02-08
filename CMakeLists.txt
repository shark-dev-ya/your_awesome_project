CMAKE_MINIMUM_REQUIRED(VERSION 3.10)

PROJECT(PoC)  # Proof Of Concept

add_subdirectory(file_io)
add_subdirectory(CAN_messages)

message(STATUS "Generated Include path = ${CAN_INCLUDE_DIR},sources = ${CAN_SOURCES}")

add_subdirectory(Main_Component)