cmake_minimum_required(VERSION 2.6)
project(TratamentoDePoligonos)

INCLUDE(FindPkgConfig)

IF(CMAKE_COMPILER_IS_GNUCC)
SET(CMAKE_CXX_FLAGS
"${CMAKE_CXX_FLAGS} -Wall -std=c++0x -DBUILD_SHARED_LIBS=OFF")
ENDIF(CMAKE_COMPILER_IS_GNUCC)

set(SOURCES
   point/Point.cpp
   Test/test.cpp
   poligono/poligono.cpp

)

set(HEADERS
    point/Point.h
    Test/test.h
    poligono/poligono.h
    retangulo/Retangulo.h
)
include_directories("point/")
include_directories("poligono/")
include_directories("retangulo/")
include_directories("Test/")
include_directories("retangulo/")

find_package (Threads)

add_executable(TratamentoDePoligonos
               main.cpp
               ${SOURCES}
	       ${HEADERS})

target_link_libraries (TratamentoDePoligonos ${CMAKE_THREAD_LIBS_INIT})

install(TARGETS TratamentoDePoligonos RUNTIME DESTINATION bin)
