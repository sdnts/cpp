load("@bazel_tools//tools/build_defs/repo:git.bzl", "git_repository")

git_repository(
    name = "gtest",
    remote = "git@github.com:google/googletest.git",
    tag = "release-1.12.1",
)

# hedron_compile_commands, generates compile_commands.json
git_repository(
    name = "hcc",
    commit = "c6cd079bef5836293ca18e55aac6ef05134c3a9d",
    remote = "git@github.com:hedronvision/bazel-compile-commands-extractor.git",
    shallow_since = "1671250838 -0800",
)

load("@hcc//:workspace_setup.bzl", "hedron_compile_commands_setup")

hedron_compile_commands_setup()
