bitboard_t = 'bitboard_test.cc'
pawns_t = 'pawns_test.cc'

bitboard = ['../src/bitboard.h', '../src/bitboard.cc']
pawns = ['../src/pawns.h', '../src/pawns.cc']

gtest = subproject('gtest')
gtest_dep = gtest.get_variable('gtest_dep')

executable('Bitboard', [bitboard_t, bitboard], dependencies: [gtest_dep])
executable('Pawns', [pawns_t, pawns, bitboard], dependencies: [gtest_dep])
