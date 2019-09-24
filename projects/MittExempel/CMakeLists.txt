#--------------------------------------------------------------------------
# ImGuiExample project
#--------------------------------------------------------------------------

PROJECT(MittExempel)
FILE(GLOB example_headers code/*.h)
FILE(GLOB example_sources code/*.cc)

SET(files_example ${example_headers} ${example_sources})
SOURCE_GROUP("example" FILES ${files_example})

ADD_EXECUTABLE(MittExempel ${files_example})
TARGET_LINK_LIBRARIES(MittExempel core render)
ADD_DEPENDENCIES(MittExempel core render mathlibrary)