project(study-pcl)
cmake_minimum_required(VERSION 2.8)

IF (WIN32) 
    OPTION(WIN64_VS2013 "windows" ON)
ELSEIF (UNIX) 
    ADD_DEFINITIONS(-DUBUNTU)
ELSE ()

ENDIF ()
set(CZ_ROOT_PATH ${CMAKE_CURRENT_SOURCE_DIR}/../../coding)


include(cmake/3rdparty.cmake)
include(cmake/options.cmake)


add_subdirectory(study)
