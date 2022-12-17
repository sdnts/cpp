#include "lib.h"
#include <filesystem>
#include <iostream>

int main(int argc, char **argv) {
  auto sum = lib::add(1, 2);
  std::cout << "Hello World! " << sum << std::endl;

  return 0;
}