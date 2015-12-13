if(WITH_CUDA)
  cuda_add_executable( DisplayImage DisplayImage.cpp)
  target_link_libraries(DisplayImage ${OpenCV_LIBS} features)
else ()
  add_executable( DisplayImage DisplayImage.cpp)
  target_link_libraries( DisplayImage ${OpenCV_LIBS} features)
endif ()

