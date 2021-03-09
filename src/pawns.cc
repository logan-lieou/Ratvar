#include "pawns.h"

using namespace std;

Bitboard MaskPawnAttack(Square sq, Side si) {
    Bitboard attack_map = 0ULL;
    Bitboard bitboard = 0ULL;

    SetBit(bitboard, sq);
    PrintBitboard(bitboard);

    // white side
    switch(si) {
        case White:
            cout << "White" << endl;
            break;
        case Black:
            cout << "Black" << endl;
            break;
        default:
            cout << "Enter a valid side??" << endl;
            break;
    }

    return attack_map;
}
