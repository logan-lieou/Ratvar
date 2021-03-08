sources = ['bitboard_test.cc']
gtest = subproject('gtest')
gtest_dep = gtest.get_variable('gtest_dep')

executable('Ratvar', sources,
			dependencies: [gtest_dep])
