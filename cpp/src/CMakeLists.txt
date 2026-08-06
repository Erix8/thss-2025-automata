cmake_minimum_required(VERSION 3.15)
project(cpp)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_VERBOSE_MAKEFILE ON) # 构建过程中每一步显示详细的编译指令
set(X_ASAN OFF) # AddressSanitizer，简称ASan，可以帮助你检查内存越界访问等错误。如需打开，请把此项的OFF改为ON。关于ASan的更多信息可参见 https://github.com/google/sanitizers/wiki/AddressSanitizer
# 注意：不是所有平台都支持ASan。目前经过测试的平台只有：amd64-Linux-gcc11.4.0(Ubuntu22.04)，amd64-windows-MSVC2022。如果在你的平台下打开此选项导致无法编译，请不要使用该功能。

list(APPEND CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/../lib/antlr)
set(ANTLR4_ZIP_REPOSITORY ${PROJECT_SOURCE_DIR}/../lib/antlr/antlr4-cpp-runtime-4.12.0-source.zip)
set(ANTLR_BUILD_CPP_TESTS OFF) # 否则，antlr4-cpp-runtime会联网拉取github.com/google/googletest依赖
include(ExternalAntlr4Cpp)
message(STATUS "Found antlr4 static libs: ${ANTLR4_STATIC_LIBRARIES} and includes: ${ANTLR4_INCLUDE_DIRS} ")

if (MINGW)
    add_link_options(-static -static-libgcc -static-libstdc++)
elseif (MSVC)
    add_link_options(/STACK:8388608) # MSVC默认栈大小为1M，故设置栈大小为与评测机一致的8M
    add_compile_options(/utf-8)
    set(CMAKE_MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>") # 使项目静态链接CRT，否则会报错LNK2038：检测到“RuntimeLibrary”的不匹配项
endif ()

if (X_ASAN)
    add_compile_options(-fsanitize=address)
    if (MSVC)
        if (MSVC_TOOLSET_VERSION GREATER_EQUAL 143) # 对VS2022及以上的特殊处理，详见 https://learn.microsoft.com/en-us/cpp/sanitizers/error-container-overflow?view=msvc-170
            add_compile_definitions(_DISABLE_VECTOR_ANNOTATION _DISABLE_STRING_ANNOTATION)
        endif ()
    else ()
        add_link_options(-fsanitize=address) # GCC等，需要把ASAN也加进链接器选项去
    endif ()
endif ()

add_executable(nfa main-nfa.cpp nfa.cpp nfa.h utils.h)

file(GLOB PARSER_SRC "../parser/*.cpp")
add_executable(regex main-regex.cpp nfa.cpp nfa.h utils.h regex.cpp regex.h ${PARSER_SRC})
target_include_directories(regex PRIVATE "..")
add_dependencies(regex antlr4_static)
target_link_libraries(regex antlr4_static)
target_compile_definitions(regex PUBLIC ANTLR4CPP_STATIC)
