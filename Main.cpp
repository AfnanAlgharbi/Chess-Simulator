#include <iostream>
#include "Chess.h"
#include <string>
#include <cstdlib>

using namespace std;

void gridDisplay(std::string board[][8]);

void title() {
	cout << "\t   ___        _______    __    __    _______    _______    _______        ___" << endl;
	cout << "\t  (   )      |       |  |  |  |  |  |       |  |       |  |       |      (   )" << endl;
	cout << "\t  _| |_      | |-----   |  |  |  |  | |-----   | |-----   | |-----       _| |_" << endl;
	cout << "\t |_____|     | |        |  |__|  |  | |_____   | |        | |           |_____|" << endl;
	cout << "\t   | |       | |        |        |  |  _____|  |  -----   |  -----        | |" << endl;
	cout << "\t  (___)      | |        |  |--   |  | |         _____  |   _____  |      (___)" << endl;
	cout << "\t (_____)     | |_____   |  |  |  |  | |_____    _____| |   _____| |     (_____)" << endl;
	cout << "\t(_______)    |       |  |  |  |  |  |       |  |       |  |       |    (_______)" << endl;
	cout << " \t|_______|     -------    --    --    -------    -------    -------     |_______|" << endl;
	cout << endl << endl << endl;
}
inline void WaitEnter() {
	std::cout << " ";
	while (std::cin.get() != '\n');
}
void gameOn() {
	cout << ">>Press Enter to continue" << endl;
	WaitEnter();
	system("cls");
	string sGrid[8][8];
	int row, col;
	int option = 66;
	int condition = 0;
	Gameplay oChessPiece;

	


	while (option != -1)

	{
		if (option == 66) {
			oChessPiece.girdLayout(sGrid);
		}
		system("cls");
		gridDisplay(sGrid);

		cout << "\n\n";
		cout << "Enter a position of a chess piece : " << endl;
	
		cin >> row;
		if (row == -1)
			break;
		else if (row == 66) {
			option = 66;
			continue;
		}
		cin >> col;
		if (col == -1)
			break;
		else if (col == 66) {
			option = 66;
			continue;
		}

		if (sGrid[row][col] == oChessPiece.pawn)
		{
			oChessPiece.legalMoves(sGrid, row, col, 'P');
			condition = 1;
		}
		else if (sGrid[row][col] == oChessPiece.rook)
		{
			oChessPiece.legalMoves(sGrid, row, col, 'R');
			condition = 2;
		}
		else if (sGrid[row][col] == oChessPiece.knight)
		{
			oChessPiece.legalMoves(sGrid, row, col, 'N');
			condition = 3;

		}
		else if (sGrid[row][col] == oChessPiece.bishop)
		{
			oChessPiece.legalMoves(sGrid, row, col, 'B');
			condition = 4;
		}
		else if (sGrid[row][col] == oChessPiece.king)
		{
			oChessPiece.legalMoves(sGrid, row, col, 'K');
			condition = 5;
		}
		else if (sGrid[row][col] == oChessPiece.queen)
		{
			oChessPiece.legalMoves(sGrid, row, col, 'Q');
			condition = 6;
		}
		system("cls");
		gridDisplay(sGrid);

		cout << "Enter a number: " << endl;
		cin >> option;
		if (option == -1)
			break;
		else if (option == 66) {
			continue;
		}
		cout << "______________________________________" << endl;
		if (option > 0 && option < 34)
		{
			if (condition == 1)
			{
				oChessPiece.mPawn(sGrid, row, col, option);
			}

			else if (condition == 2)
			{
				oChessPiece.mRook(sGrid, row, col, option);
			}

			else if (condition == 3)
			{
				oChessPiece.mKnight(sGrid, row, col, option);
			}

			else if (condition == 4)
			{
				oChessPiece.mBishop(sGrid, row, col, option);
			}

			else if (condition == 5)
			{
				oChessPiece.mKing(sGrid, row, col, option);
			}

			else if (condition == 6)
			{
				oChessPiece.mQueen(sGrid, row, col, option);
			}

		}

		if (option == 66)
		{
			for (int i = 0; i < 8; i++)
			{
				for (int j = 0; j < 8; j++)
				{
					sGrid[i][j] = "[ ]";
				}
			}
			for (int j = 0; j < 8; j++)
			{
				sGrid[6][j] = oChessPiece.pawn;
			}


			sGrid[7][0] = "[R]";
			sGrid[7][7] = "[R]";
			sGrid[7][1] = "[N]";
			sGrid[7][6] = "[N]";
			sGrid[7][2] = "[B]";
			sGrid[7][5] = "[B]";
			sGrid[7][3] = "[Q]";
			sGrid[7][4] = "[K]";

			cout << "\n";

			cout << "\n  0  1  2  3  4  5  6  7\n";
			for (int i = 0; i < 8; i++)
			{
				cout << i;
				for (int j = 0; j < 8; j++)
				{
					cout << sGrid[i][j];
				}
				cout << endl;
			}

			cout << "\n\n";
			cout << "Enter a position of a chess piece : ";
			cin >> row;
			if (row == -1)
				break;
			cin >> col;
			if (col == -1)
				break;
			if (sGrid[row][col] == oChessPiece.pawn)
			{
				oChessPiece.legalMoves(sGrid, row, col, 'P');
				condition = 1;
			}
			else if (sGrid[row][col] == oChessPiece.rook)
			{

				oChessPiece.legalMoves(sGrid, row, col, 'R');
				condition = 2;
			}
			else if (sGrid[row][col] == oChessPiece.knight)
			{
				oChessPiece.legalMoves(sGrid, row, col, 'N');
				condition = 3;

			}
			else if (sGrid[row][col] == oChessPiece.bishop)
			{
				oChessPiece.legalMoves(sGrid, row, col, 'B');
				condition = 4;
			}
			else if (sGrid[row][col] == oChessPiece.king)
			{
				oChessPiece.legalMoves(sGrid, row, col, 'K');
				condition = 5;
			}
			else if (sGrid[row][col] == oChessPiece.queen)
			{
				oChessPiece.legalMoves(sGrid, row, col, 'Q');
				condition = 6;
			}
			system("cls");
			gridDisplay(sGrid);
			cout << "\n\nEnter a number: " << endl;
			cout << "(-1) Main Menu \t\t (66) Reset" << endl;
			cin >> option;
			if (option == -1)
				break;
			if (option > 0 && option < 34)
			{
				if (condition == 1)
				{
					oChessPiece.mPawn(sGrid, row, col, option);
				}

				else if (condition == 2)
				{
					oChessPiece.mRook(sGrid, row, col, option);
				}

				else if (condition == 3)
				{
					oChessPiece.mKnight(sGrid, row, col, option);
				}

				else if (condition == 4)
				{
					oChessPiece.mBishop(sGrid, row, col, option);
				}

				else if (condition == 5)
				{
					oChessPiece.mKing(sGrid, row, col, option);
				}

				else if (condition == 6)
				{
					oChessPiece.mQueen(sGrid, row, col, option);
				}

			}

		}

		condition = 0;
	}
	if (option == -1)
	{
		cout << "\n\nGoodbye!!" << endl;
	}
	system("cls");

}

void Menu()
{

	cout << "\t \t \t\t\t\t" << "MAIN MENU" << endl;
	cout << "\t \t \t\t\t\t" << "---------" << endl << endl;

	cout << "\t \t \t\t\t\t" << "A. Start Game\n";
	cout << "\t \t \t\t\t\t" << "B. Instructions\n";
	cout << "\t \t \t\t\t\t" << "C. Quit Game";

}



int main()
{
	char option;
	const char Op1 = 'A', Op2 = 'B', Op3 = 'C';
	SetConsoleOutputCP(65001);
	
	do {
		system("cls");
		title();
		Menu();
		cout << "\n>> Please choose an option:  " << endl << endl;
		cin >> option;
		system("cls");
		switch (option)
		{

		case Op1:
		case 'a':
			option = Op1;
			title();
			gameOn();
			break;
		case Op2:
		case 'b':
			title();
			cout << "  INSTRUCTIONS:" << endl;
			cout << "  ------------" << endl;
			cout << ">>THE PIECES MOVE AS FOLLOWS: " << endl;
			cout << "  - Pawns  (\xe2\x99\x99): In two spaces." << endl;
			cout << "  - Bishop (\xe2\x99\x97): Diagonally across the board." << endl;
			cout << "  - Rook   (\xe2\x99\x96): Horizontally and Vertically." << endl;
			cout << "  - Knight (\xe2\x99\x98): In an 'L' shaoe across the board. " << endl;
			cout << "  - King   (\xE2\x99\x94): On a square one at a time." << endl;
			cout << "  - Queen  (\xe2\x99\x95): Any direction on the board." << endl;

			break;
		case Op3:
		case 'c':
			title();
			cout << "GoodBye!";
			option = Op3;
			break;
			


		}

		if (option != Op1)
			system("pause>nul");
	} while (option != Op3);

}



void gridDisplay(std::string board[][8]) {
	cout << "______________________________________" << endl;
	cout << "(-1) Main Menu \t\t (66) Reset" << endl;
	cout << "\t\t\n  0  1  2  3  4  5  6  7\n";
	for (int i = 0; i < 8; i++)
	{
		cout << i;
		for (int j = 0; j < 8; j++)
		{
			cout << board[i][j];
		}
		cout << endl;
	}
}