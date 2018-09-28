cmake_minimum_required(VERSION 3.5)
  
add_subdirectory(../.. ${CMAKE_CURRENT_BINARY_DIR}/boost_config)
  
add_executable(boost_config_cmake_test main.cpp)  
target_link_libraries(boost_config_cmake_test Boost::config)  
