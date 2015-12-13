cmake_minimum_required(VERSION 2.8)
project( Lire++ )

option( WITH_CUDA "CUDA Enabled" OFF)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

find_package( OpenCV REQUIRED )
find_package( CUDA )

set(LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR}/lib CACHE PATH
  "Output directory for libraries")
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR}/bin CACHE PATH
  "Output directory for applications")
 
include_directories(${CMAKE_CURRENT_SOURCE_DIR})
include_directories(${OpenCV_INCLUDE_DIRS})

add_subdirectory(features)

if(WITH_CUDA)
  if(NOT CUDA_FOUND)
    message(FATAL_ERROR "Please install CUDA and make it available for Cmake
      before compiling the code with the WITH_CUDA flag")
  endif ()
endif ()


add_subdirectory(apps)

