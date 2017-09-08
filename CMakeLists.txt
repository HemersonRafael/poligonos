cmake_minimum_required(VERSION 2.6)
project(TratamentoDePoligonos)

INCLUDE(FindPkgConfig)

IF(CMAKE_COMPILER_IS_GNUCC)
SET(CMAKE_CXX_FLAGS
"${CMAKE_CXX_FLAGS} -Wall -std=c++0x -DBUILD_SHARED_LIBS=OFF")
ENDIF(CMAKE_COMPILER_IS_GNUCC)

# definicoes da remoteAPI para CPP
add_definitions(-DNON_MATLAB_PARSING)
add_definitions(-DMAX_EXT_API_CONNECTIONS=255)

set(SOURCES
   main.cpp
   test.cpp
)

set(HEADERS
    test.h
    

)
include_directories("ponto/")
include_directories("poligono/")
include_directories("retangulo/")

find_package (Threads)

add_executable(TratamentoDePoligonos
               main.cpp
               ${SOURCES}
	       ${HEADERS})

target_link_libraries (TratamentoDePoligonos ${CMAKE_THREAD_LIBS_INIT})

install(TARGETS TratamentoDePoligonos RUNTIME DESTINATION bin)
