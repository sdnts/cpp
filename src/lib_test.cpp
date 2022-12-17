#include "lib.h"
#include <gtest/gtest.h>

TEST(Bencode, Integers) {
  auto sum = lib::add(1, 2);
  EXPECT_EQ(sum, 3);
}