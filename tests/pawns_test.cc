#include <gtest/gtest.h>
#include "../src/pawns.h"

TEST(PawnTests, OutputTest) {
    // want this to output the e4 position as occupied
    MaskPawnAttack(e4, White);
}

int main(int argc, char *argv[]) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
