SET(viewaxis_SOURCES viewfact.cpp)

INCLUDE_DIRECTORIES("${CMAKE_SOURCE_DIR}/fem/src/viewaxis")
INCLUDE_DIRECTORIES("${CMAKE_CURRENT_BINARY_DIR}")
ADD_LIBRARY(viewaxis STATIC ${viewaxis_SOURCES})
