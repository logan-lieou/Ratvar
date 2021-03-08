#include "bitboard.h"

bool GetBit(Bitboard b, int s) {
    return (b & (1ULL << s)) ? 1 : 0;
}

void SetBit(Bitboard &b, Square s) {
    b |= (1ULL << s);
}

void FlipBit(Bitboard &b, Square s) {
    b ^= (1ULL << s);
}

void PopBit(Bitboard &b, Square s) {
    if (GetBit(b, s)) {
        FlipBit(b, s);
    }
}

void PrintBitboard(Bitboard b) {
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            int square = i * 8 + j;
            printf(" %d ", GetBit(b, square));
        }
        printf("\n");
    }
    printf("\nBitboard: %lu\n\n", b);
}
