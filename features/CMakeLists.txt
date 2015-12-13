set(FEATURE_INCLUDES
  AbstractFeature.h
  ExampleFeature.h
  )
set(FEATURE_CPP_SOURCES
  AbstractFeature.cpp
  ExampleFeature.cpp
  )
set(FEATURE_CUDA_SOURCES
  ExampleFeature.cu)

if (WITH_CUDA)
  #We are not checking for CUDA anymore, if it comes here and there is no CUDA
  # then it is the user's problem
  cuda_add_library(features ${FEATURE_CUDA_SOURCES} ${FEATURE_CPP_SOURCES})
else ()
  add_library(features ${FEATURE_CPP_SOURCES})
endif ()
