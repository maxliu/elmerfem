INCLUDE(${CMAKE_CURRENT_SOURCE_DIR}/../test_macros.cmake)
INCLUDE_DIRECTORIES(${CMAKE_BINARY_DIR}/fem/src)

CONFIGURE_FILE( MGDynamicsSteady.sif MGDynamicsSteady.sif COPYONLY)

file(COPY ELMERSOLVER_STARTINFO mesh3d DESTINATION "${CMAKE_CURRENT_BINARY_DIR}/")

ADD_ELMER_TEST(mgdyn_steady)
