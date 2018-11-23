set(VIRTUAL_LIB_NAME virtual)
set(VIRTUAL_LIB_NAME_UPPER VIRTUAL)

aux_source_directory(./ STUDY_${VIRTUAL_LIB_NAME_UPPER}_SRC)

set(STUDY_${VIRTUAL_LIB_NAME_UPPER}_LIB study_${VIRTUAL_LIB_NAME} CACHE INTERNAL "study_virtual")

add_library(${STUDY_${VIRTUAL_LIB_NAME_UPPER}_LIB} SHARED ${STUDY_${VIRTUAL_LIB_NAME_UPPER}_SRC})

IF (WIN32)
    target_link_libraries(${STUDY_${VIRTUAL_LIB_NAME_UPPER}_LIB}
                          ${CZ_COMMON_UTILS_LIBRARY})
    SET(INSTALL_TARGETS ${STUDY_${VIRTUAL_LIB_NAME_UPPER}_LIB})
    INCLUDE(${CZ_ROOT_PATH}/config-cmake/install.cmake)
ELSE ()
    target_link_libraries(${STUDY_${VIRTUAL_LIB_NAME_UPPER}_LIB}
                          ${CZ_COMMON_UTILS_LIBRARY})
ENDIF ()

