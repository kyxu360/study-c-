
IF (WIN32) 
    add_executable(virtual-test virtual-test.cpp)
    target_link_libraries(virtual-test 
        ${CZ_COMMON_UTILS_LIBRARY}
        ${STUDY_VIRTUAL_LIB})
    
ELSE ()

ENDIF ()
 