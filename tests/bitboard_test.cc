#include "../src/bitboard.h"
#include <gtest/gtest.h>

TEST(BitboardTests, GetBitTest) {
  /*
  The bitboard is full so all pos. are
  1, 1:=True so we expect true
  */
  Bitboard full = ~Bitboard(0);
  EXPECT_TRUE(GetBit(full, e4));
}

TEST(BitboardTests, FlipBitTest) {
  Bitboard aaa = 255ULL;
  /*
  11111111 the first bit is now 0
  therefore we expect false since
  0 := False, 01111111
  */
  FlipBit(aaa, a8);
  EXPECT_FALSE(GetBit(aaa, a8));
}

TEST(BitboardTests, OutputTest) {
  // first row is filled
  Bitboard aaa = 255ULL;

  // output the bitboard
  PrintBitboard(aaa);
}

int main(int argc, char *argv[]) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
