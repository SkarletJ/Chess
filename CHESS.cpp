﻿// CHESS.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

int main()
{
	ChessBoard cb;
	cb.debugPrint();
	cb.placePiece('E', 2, 'p');
	cb.debugPrint();
	system("pause");
    return 0;
}