include(${TEST_SOURCE}/../test_macros.cmake)
execute_process(COMMAND ${ELMERGRID_BIN} 1 2 square.grd -triangles)
RUN_ELMER_TEST()
