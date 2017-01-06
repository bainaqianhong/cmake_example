set(TARGET_NAME interface_impl)

set(TARGET_SRC 
	../../include/interface/interface.h
    export_func.cpp
    interface_impl.cpp   
    )


add_library(${TARGET_NAME} SHARED ${TARGET_SRC})

## set_target_properties(${TARGET_NAME} PROPERTIES ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
## set_target_properties(${TARGET_NAME} PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin) 
## set_target_properties(${TARGET_NAME} PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin) 
## 
## 
## set_target_properties(${TARGET_NAME} PROPERTIES VERSION 0.1 SOVERSION 1)


