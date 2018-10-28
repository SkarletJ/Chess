#include "stdafx.h"


ChessBoard::ChessBoard()
{
	for (int i = 0; i < 8; ++i)
	{
		for (int j = 0; j < 8; ++j)
		{
			board[i][j] = ' ';
		}
	}
}

void ChessBoard::debugPrint()
{
	std::cout << ' ';
	for (int i = 0; i < 8; ++i)
	{
		std::cout << ' ' << (char)('A' + i);
	}
	std::cout << std::endl;

	for (int rank = 8; rank > 0; --rank)
	{
		std::cout << rank;
		for (int file = 0; file < 8; ++file)
		{
			std::cout << ' ' << board[rank - 1][file];
		}
		std::cout << std::endl;
	}
}

void ChessBoard::placePiece(char file, int rank, ChessPiece piece)
{
	board[rank - 1][file - 'A'] = piece;
}