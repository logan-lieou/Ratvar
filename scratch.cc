#include <iostream>
#include "./src/bitboard.h"

// use pawn attacks [side][square]
Bitboard pawn_attacks[2][64];

// generate pawn attacks
Bitboard mask_pawn_attacks(Square sq, Side si) {
    Bitboard attacks = 0ULL;
    Bitboard bitboard = 0ULL;

    SetBit(bitboard, sq);
    PrintBitboard(bitboard);

    // white pawns
    if (!si) {
        // todo impl.
        std::cout << "White" << std::endl;
    }
    // black pawns
    else {
        std::cout << "Black" << std::endl;
    }

    return attacks;
}

int main() {
    mask_pawn_attacks(e4, White);
}
