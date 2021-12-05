

add_compile_definitions(SPDLOG_COMPILED_LIB)

include_directories(include)



add_library(spdlog
        src/async.cpp
        src/cfg.cpp
        src/color_sinks.cpp
        src/file_sinks.cpp
        src/fmt.cpp
        src/spdlog.cpp
        src/stdout_sinks.cpp
        )

