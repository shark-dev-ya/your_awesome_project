execute_process(
    # name
    # generate_sources_from_json
    # COMMAND cmd arg1 arg2 arg ...
    COMMAND "python3" "can_msg_gen.py"
    # working directory -> our folder with CMakeLitst.txt
    WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
)
set(CAN_INCLUDE_DIR 
            #
            "${CMAKE_CURRENT_SOURCE_DIR}/output/include" 
             PARENT_SCOPE)
            #
set(CAN_SOURCES 
            ${CMAKE_CURRENT_SOURCE_DIR}/output/src/CAN_min_signals.cpp 
            PARENT_SCOPE)