#include "bitboard.h"

int main() {
    Bitboard all = ~Bitboard(0);
    Bitboard emp = Bitboard(0);

    Bitboard ffo = 4ULL;
    Bitboard ffp = 16ULL;
    Bitboard ffu = 255ULL;

    ffu |= (1ULL << e4);

    // Set Flip and Pop
    SetBit(ffp, d4);
    FlipBit(ffu, a8);
    PopBit(ffu, a7);

    // outputs
    PrintBitboard(all);
    PrintBitboard(ffo);
    PrintBitboard(ffp);
    PrintBitboard(ffu);

    std::cout << (GetBit(ffu, a8) ? "True" : "False") << "\n\n";
}
