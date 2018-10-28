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
	bool isCheckMate(PlayerColour turn);  //�������� �� ���
	bool isCheck(PlayerColour turn);	  //�������� �� ���
	bool isEmpty(char file, int rank);    //��������� ����� �� ������
	void placePiece(char file, int rank, ChessPiece piece);
	void debugPrint();
};