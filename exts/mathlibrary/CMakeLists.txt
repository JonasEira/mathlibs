project (mathlibrary)

set (MATHLIBRARY_DIR ${CMAKE_CURRENT_SOURCE_DIR})
#include_directories (${MATHLIBRARY_DIR}/.)

set(MATHLIBRARY_HEAD 
	${MATHLIBRARY_DIR}/src/Matrix4D.h
	${MATHLIBRARY_DIR}/src/Vector4D.h
	)
set(SOURCE
    ${CMAKE_CURRENT_SOURCE_DIR}/Matrix4D.h
    ${CMAKE_CURRENT_SOURCE_DIR}/Vector4D.h
	mathlibrary)
add_library (mathlibrary STATIC ${MATHLIBRARY_HEAD})
