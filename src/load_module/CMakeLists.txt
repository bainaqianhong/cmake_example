
set(TARGET_NAME load_module)

set(TARGET_SRC 
	../../include/load_module/load_module_t.h
    load_module_windows.cpp
    )


add_definitions(-DLOAD_MODULE_DLL_EXPORT)

add_library(${TARGET_NAME} SHARED ${TARGET_SRC})

