sources = ['bitboard_test.cc']

bitboard = ['../src/bitboard.h', '../src/bitboard.cc']

gtest = subproject('gtest')
gtest_dep = gtest.get_variable('gtest_dep')

executable('Ratvar', [sources, bitboard], dependencies: [gtest_dep])
