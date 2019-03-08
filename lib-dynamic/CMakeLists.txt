add_library(LibDynamic SHARED bar.cpp detail.cpp)
target_include_directories(LibDynamic PUBLIC 
	${CMAKE_CURRENT_LIST_DIR}
	${CMAKE_CURRENT_BINARY_DIR})

target_link_libraries(LibDynamic LibStatic)

include(GenerateExportHeader)
generate_export_header(LibDynamic)