cmake_minimum_required(VERSION 3.20)
project(scaner_)

set(CMAKE_CXX_STANDARD 23)
include_directories(${CMAKE_SOURCE_DIR}/include)
add_executable(scaner_ src/main.cpp src/Translation.cpp  src/DirectoryWorker.cpp src/Antivirus.cpp)

