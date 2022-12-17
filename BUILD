load("@rules_cc//cc:defs.bzl", "cc_binary", "cc_library", "cc_test")

COPTS = select({
    "//conditions:default": ["--std=c++20"],
})

cc_library(
    name = "cpp_lib",
    srcs = glob(
        [
            "src/*.cpp",
        ],
        [
            "src/main.cpp",
            "src/*_test.cpp",
        ],
    ),
    hdrs = glob(["src/*.h"]),
    copts = COPTS,
)

cc_test(
    name = "cpp_test",
    size = "small",
    srcs = glob(
        ["src/*_test.cpp"],
    ),
    copts = COPTS,
    deps = [
        ":cpp_lib",
        "@gtest//:gtest_main",
    ],
)

cc_binary(
    name = "cpp",
    srcs = ["src/main.cpp"],
    copts = COPTS,
    deps = [":cpp_lib"],
)
