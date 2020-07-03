cmake_minimum_required(VERSION 3.0.0)
project(GeekAlgorithm VERSION 0.1.0)

include(CTest)
enable_testing()
aux_source_directory(Geek07LinkedList02/byListIsString DIR_SRCS)
add_executable(GeekAlgorithm ${DIR_SRCS})

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
