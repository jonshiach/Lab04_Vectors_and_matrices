# CMake entry point
cmake_minimum_required (VERSION 3.0)
project (Lab04_Vectors_and_matrices)	

# Compile external dependencies 
add_subdirectory (external)

include_directories(
	external/glm-0.9.7.1/
	.
)

add_definitions(
	-DTW_STATIC
	-DTW_NO_LIB_PRAGMA
	-DTW_NO_DIRECT3D
	-DGLEW_STATIC
	-D_CRT_SECURE_NO_WARNINGS
)

# Source code
add_executable(Lab04_Vectors_and_matrices 
	source/main.cpp
)


# Xcode and Visual working directories
set_target_properties(Lab04_Vectors_and_matrices PROPERTIES XCODE_ATTRIBUTE_CONFIGURATION_BUILD_DIR "${CMAKE_CURRENT_SOURCE_DIR}/source/")
# create_target_launcher(Lab04_Vectors_and_matrices WORKING_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/source/")
# create_default_target_launcher(Lab04_Vectors_and_matrices WORKING_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/source/")

if (NOT ${CMAKE_GENERATOR} MATCHES "Xcode" )

add_custom_command(
   TARGET Lab04_Vectors_and_matrices POST_BUILD
   COMMAND ${CMAKE_COMMAND} -E copy "${CMAKE_CURRENT_BINARY_DIR}/${CMAKE_CFG_INTDIR}/Lab04_Vectors_and_matrices${CMAKE_EXECUTABLE_SUFFIX}" "${CMAKE_CURRENT_SOURCE_DIR}/source/"
)

elseif (${CMAKE_GENERATOR} MATCHES "Xcode" )

endif (NOT ${CMAKE_GENERATOR} MATCHES "Xcode" )

