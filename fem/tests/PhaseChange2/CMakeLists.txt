INCLUDE(${CMAKE_CURRENT_SOURCE_DIR}/../test_macros.cmake)
INCLUDE_DIRECTORIES(${CMAKE_BINARY_DIR}/fem/src)

CONFIGURE_FILE( PhaseChangeSS.sif PhaseChangeSS.sif COPYONLY)

file(COPY ELMERSOLVER_STARTINFO  PhaseChange.grd DESTINATION "${CMAKE_CURRENT_BINARY_DIR}/")

ADD_ELMER_TEST(PhaseChange2)
