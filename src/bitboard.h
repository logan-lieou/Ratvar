#ifndef BITBOARD_H_INCLUDED
#define BITBOARD_H_INCLUDED

#include <iostream>

typedef uint64_t Bitboard;

enum Square : int {
a8, b8, c8, d8, e8, f8, g8, h8,
a7, b7, c7, d7, e7, f7, g7, h7,
a6, b6, c6, d6, e6, f6, g6, h6,
a5, b5, c5, d5, e5, f5, g5, h5,
a4, b4, c4, d4, e4, f4, g4, h4,
a3, b3, c3, d3, e3, f3, g3, h3,
a2, b2, c2, d2, e2, f2, g2, h2,
a1, b1, c1, d1, e1, f1, g1, h1
};

inline bool GetBit(Bitboard b, int s) {
    return (b & (1ULL << s)) ? 1 : 0;
}

inline void SetBit(Bitboard &b, Square s) {
    // move bit 1ULL s squares on board b
    b |= (1ULL << s);
}

inline void FlipBit(Bitboard &b, Square s) {
    b ^= (1ULL << s);
}

inline void PopBit(Bitboard &b, Square s) {
    if(GetBit(b, s)) {
        FlipBit(b, s);
    }
}

inline void PrintBitboard(Bitboard b) {
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            int square = i * 8 + j;
            printf(" %d ", GetBit(b, square));
        }
        printf("\n");
    }

    printf("\nBitboard: %lu\n\n", b);
}

#endif
