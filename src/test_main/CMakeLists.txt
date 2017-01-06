
set(TARGET_NAME test_main)

set(TARGET_SRC 
    main.cpp
    )

add_executable(${TARGET_NAME} ${TARGET_SRC})

## 添加VS项目依赖项,决定工程的编译顺序
add_dependencies(${TARGET_NAME} load_module)
## 添加链接依赖项目
target_link_libraries(${TARGET_NAME} load_module)


