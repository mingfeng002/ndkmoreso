cmake_minimum_required(VERSION 3.4.1)

#生成so动态库
ADD_LIBRARY(one-lib SHARED one.cpp)

target_link_libraries(one-lib log)