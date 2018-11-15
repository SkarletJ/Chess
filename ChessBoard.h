#pragma once
#include "stdafx.h"

enum PlayerColour
{
	WHITE, BLACK
};

typedef char ChessPiece;

class ChessBoard;

class ChessBoardIterator : public std::iterator<std::input_iterator_tag, ChessPiece>
{
	ChessBoard *cb;
	int rank, file;
public:
	ChessBoardIterator(const ChessBoardIterator& that);

	bool operator != (const ChessBoardIterator& that);
	bool operator == (const ChessBoardIterator& that);
	ChessBoardIterator::value_type operator*() const;
	ChessBoardIterator& operator++();

private:
	ChessBoardIterator(ChessBoard* cb_, int rank_, int file_);

	friend ChessBoard;
};

class ChessBoard
{
	ChessPiece board[8][8];
	PlayerColour turn;
public:
	ChessBoard();
	bool isCheckMate();					//проверка на мат
	bool isCheck();						//Проверка на шах
	bool isEmpty(char file, int rank);						//Проверяет путая ли клетка
	void placePiece(char file, int rank, ChessPiece piece);
	PlayerColour getTurn();
	void debugPrint();

	ChessBoardIterator begin();
	ChessBoardIterator end();

	friend class ChessBoardIterator;
};