# C++ project template

This template sets up a development environment for C++20. It uses the [Bazel](https://bazel.build)
build system. A testing library [google/googletest](https://github.com/google/googletest)
is also included with a sample test. For VSCode, it also includes a debug configuration.
I'd like to add a few GitHub Actions soon too.

Bazel makes adding more packages simple. Refer to the [Bazel tutorial](https://bazel.build/start/cpp)

Here's a small post talking about my decisions (kinda): https://dietcode.io/t/cpp-build-systems

### Usage

Build & run binary:

```sh
bazel run :cpp
```

Build & run tests:

```sh
bazel test :cpp_test
```

You'll want to change the project/target names etc. in the `BUILD` file.

Generate compile_commands.json (for Intellisense). For now, this is a manual step
every time you add a new library / translation unit.

```sh
bazel run @hcc//:refresh_all
```

Also remember to switch the `LICENSE` to something more restrictive if necessary.
