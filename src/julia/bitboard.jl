using Printf

function GetBit(board::Int64, square::Int64)
	return ((board & (~0 << square)) == board) ? 1 : 0
end

function SetBit(board::Int64, square::Int64)
	return board |= (1 << square)
end

function FlipBit(board::Int64, square::Int64)
	return board ^= (1 << square)
end

function PopBit(board::Int64, square::Int64)
	if GetBit(board, square)
		return FlipBit(board, square)
	end
end

function PrintBitboard(board::Int64)
	for i = 1:8
		for j = 1:8
			square = i*8 + j
			print(GetBit(board, square))
		end
		println()
	end
	@printf "Bitboard: %x\n\n" board
end