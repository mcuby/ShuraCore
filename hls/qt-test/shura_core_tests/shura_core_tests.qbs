import qbs

Project {
    minimumQbsVersion: "1.7.1"

    CppApplication {
        consoleApplication: true
        files: [
            "../../shura-core-hls/src/alu.cpp",
            "../../shura-core-hls/src/alu.h",
            "../../shura-core-hls/src/execute.cpp",
            "../../shura-core-hls/src/execute.h",
            "../../shura-core-hls/src/instruction_decode.cpp",
            "../../shura-core-hls/src/instruction_decode.h",
            "../../shura-core-hls/src/instruction_fetch.cpp",
            "../../shura-core-hls/src/instruction_fetch.h",
            "../../shura-core-hls/src/memory_access.cpp",
            "../../shura-core-hls/src/memory_access.h",
            "../../shura-core-hls/src/register_file.cpp",
            "../../shura-core-hls/src/register_file.h",
            "../../shura-core-hls/src/register_write_back.cpp",
            "../../shura-core-hls/src/register_write_back.h",
            "../../shura-core-hls/src/shura_core.cpp",
            "main.cpp",
        ]
        cpp.includePaths: [
            "../../shura-core-hls/src",
        ]

        Group {     // Properties for the produced executable
            fileTagsFilter: "application"
            qbs.install: true
        }
    }
}
