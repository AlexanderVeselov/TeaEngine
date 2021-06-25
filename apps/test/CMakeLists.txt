add_executable(Test main.cpp)
target_link_libraries(Test PUBLIC GoogleTest GpuApi)
set_target_properties(Test 
    PROPERTIES VS_DEBUGGER_WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR})
