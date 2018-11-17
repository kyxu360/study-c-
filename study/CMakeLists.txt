
IF (WIN32) 
    add_executable(virtual-study virtual-study.cpp)
    target_link_libraries(virtual-study 
        ${CZ_COMMON_UTILS_LIBRARY})
    
ELSE ()

ENDIF ()
 