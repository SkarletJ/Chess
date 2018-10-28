#pragma once

enum PlayerColour
{
	WHITE, BLACK
};

typedef char ChessPiece;

class ChessBoard
{
	ChessPiece board[8][8];
public:
	ChessBoard();
	bool isCheckMate(PlayerColour turn);  //проверка на мат
	bool isCheck(PlayerColour turn);	  //Проверка на шах
	bool isEmpty(char file, int rank);    //Проверяет путая ли клетка
	void placePiece(char file, int rank, ChessPiece piece);
	void debugPrint();
};