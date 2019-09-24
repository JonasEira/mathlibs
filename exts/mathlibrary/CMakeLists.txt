project (mathlibrary)

set (MATHLIBRARY_DIR ${CMAKE_CURRENT_SOURCE_DIR})
include_directories (${MATHLIBRARY_DIR}/.)

set(MATHLIBRARY_HEAD 
	${MATHLIBRARY_DIR}/Matrix4D.h
	${MATHLIBRARY_DIR}/Vector4D.h
	)



add_library (mathlibrary STATIC ${MATHLIBRARY_HEAD})
