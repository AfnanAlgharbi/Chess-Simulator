#include "Chess.h"
#include <iostream>
#include <string>

using namespace std;


void Gameplay::legalMoves(std::string grid[][8], int currentRow, int currentCol, char piece)
{
	if (grid[currentRow][currentCol] == pawn)
	{
		int move = 1;
		if (grid[currentRow - 1][currentCol] == "[ ]" && currentRow - 1 >= 0)
		{
			grid[currentRow - 1][currentCol] = "[1]";
		}
		if (currentRow == 6 && grid[currentRow - 2][currentCol] == "[ ]" && currentRow - 2 >= 0)
		{
			grid[currentRow - 2][currentCol] = "[2]";
		}

	}

	else if (grid[currentRow][currentCol] == rook)
	{
		int move = 1;
		for (int i = 1; i < 8; i++)
		{
			if (grid[currentRow - i][currentCol] == "[ ]" && currentRow - i >= 0)
			{
				grid[currentRow - i][currentCol] = "[" + to_string(move) + "]";
				move++;
			}
		}
		for (int i = 1; i < 8; i++)
		{
			if (grid[currentRow + i][currentCol] == "[ ]" && currentRow + i <= 7)
			{
				grid[currentRow + i][currentCol] = "[" + to_string(move) + "]";
				move++;
			}

		}
		for (int i = 1; i < 8; i++)
		{
			if (grid[currentRow][currentCol + i] == "[ ]" && currentCol + i <= 7)
			{
				grid[currentRow][currentCol + i] = "[" + to_string(move) + "]";
				move++;
			}

		}

		for (int i = 1; i < 8; i++)
		{
			if (grid[currentRow][currentCol - i] == "[ ]" && currentCol - i >= 0)
			{
				grid[currentRow][currentCol - i] = "[" + to_string(move) + "]";
				move++;
			}

		}
	}

	else if (grid[currentRow][currentCol] == knight)
	{
		int move = 1;
		if (grid[currentRow - 1][currentCol + 2] == "[ ]" && currentRow - 1 >= 0 && currentCol + 2 <= 7)
		{
			grid[currentRow - 1][currentCol + 2] = "[" + to_string(move) + "]";
			move++;
		}
		if (grid[currentRow + 1][currentCol + 2] == "[ ]" && currentRow + 1 <= 7 && currentCol + 2 <= 7)
		{
			grid[currentRow + 1][currentCol + 2] = "[" + to_string(move) + "]";
			move++;
		}

		if (grid[currentRow - 1][currentCol - 2] == "[ ]" && currentRow - 1 >= 0 && currentCol - 2 >= 0)
		{
			grid[currentRow - 1][currentCol - 2] = "[" + to_string(move) + "]";
			move++;
		}

		if (grid[currentRow + 1][currentCol - 2] == "[ ]" && currentRow + 1 <= 7 && currentCol - 2 >= 0)
		{
			grid[currentRow + 1][currentCol - 2] = "[" + to_string(move) + "]";
			move++;
		}

		if (grid[currentRow - 2][currentCol + 1] == "[ ]" && currentRow - 2 >= 0 && currentCol + 1 <= 7)
		{
			grid[currentRow - 2][currentCol + 1] = "[" + to_string(move) + "]";
			move++;
		}

		if (grid[currentRow + 2][currentCol + 1] == "[ ]" && currentRow + 2 <= 7 && currentCol + 1 <= 7)
		{
			grid[currentRow + 2][currentCol + 1] = "[" + to_string(move) + "]";
			move++;
		}

		if (grid[currentRow - 2][currentCol - 1] == "[ ]" && currentRow - 2 >= 0 && currentCol - 1 >= 0)
		{
			grid[currentRow - 2][currentCol - 1] = "[" + to_string(move) + "]";
			move++;
		}

		if (grid[currentRow + 2][currentCol - 1] == "[ ]" && currentRow + 2 <= 7 && currentCol - 1 >= 0)
		{
			grid[currentRow + 2][currentCol - 1] = "[" + to_string(move) + "]";
			move++;
		}
	}
	else if (grid[currentRow][currentCol] == bishop)
	{
		int move = 1;
		for (int i = 1; i < 8; i++)
		{
			if (grid[currentRow - i][currentCol - i] == "[ ]" && currentRow - i >= 0 && currentCol - i >= 0)
			{
				grid[currentRow - i][currentCol - i] = "[" + to_string(move) + "]";
				move++;
			}
		}
		for (int i = 1; i < 8; i++)
		{
			if (grid[currentRow + i][currentCol - i] == "[ ]" && currentRow + i <= 7 && currentCol - i >= 0)
			{
				grid[currentRow + i][currentCol - i] = "[" + to_string(move) + "]";
				move++;
			}

		}
		for (int i = 1; i < 8; i++)
		{
			if (grid[currentRow - i][currentCol + i] == "[ ]" && currentRow - i >= 0 && currentCol + i <= 7)
			{
				grid[currentRow - i][currentCol + i] = "[" + to_string(move) + "]";
				move++;
			}

		}
		for (int i = 1; i < 8; i++)
		{
			if (grid[currentRow + i][currentCol + i] == "[ ]" && currentRow + i <= 7 && currentCol + i <= 7)
			{
				grid[currentRow + i][currentCol + i] = "[" + to_string(move) + "]";
				move++;
			}
		}
	}

	else if (grid[currentRow][currentCol] == king)
	{
		int move = 1;
		if (grid[currentRow - 1][currentCol] == "[ ]" && currentRow - 1 >= 0)
		{
			grid[currentRow - 1][currentCol] = "[" + to_string(move) + "]";
			move++;
		}

		if (grid[currentRow + 1][currentCol] == "[ ]" && currentRow + 1 <= 7)
		{
			grid[currentRow + 1][currentCol] = "[" + to_string(move) + "]";
			move++;
		}

		if (grid[currentRow - 1][currentCol - 1] == "[ ]" && currentRow - 1 >= 0 && currentCol - 1 >= 0)
		{
			grid[currentRow - 1][currentCol - 1] = "[" + to_string(move) + "]";
			move++;
		}

		if (grid[currentRow - 1][currentCol + 1] == "[ ]" && currentRow - 1 >= 0 && currentCol + 1 <= 7)
		{
			grid[currentRow - 1][currentCol + 1] = "[" + to_string(move) + "]";
			move++;
		}

		if (grid[currentRow + 1][currentCol - 1] == "[ ]" && currentRow + 1 <= 7 && currentCol - 1 >= 0)
		{
			grid[currentRow + 1][currentCol - 1] = "[" + to_string(move) + "]";
			move++;
		}

		if (grid[currentRow + 1][currentCol + 1] == "[ ]" && currentRow + 1 <= 7 && currentCol + 1 <= 7)
		{
			grid[currentRow + 1][currentCol + 1] = "[" + to_string(move) + "]";
			move++;
		}

		if (grid[currentRow][currentCol + 1] == "[ ]" && currentCol + 1 <= 7)
		{
			grid[currentRow][currentCol + 1] = "[" + to_string(move) + "]";
			move++;
		}

		if (grid[currentRow][currentCol - 1] == "[ ]" && currentCol - 1 >= 0)
		{
			grid[currentRow][currentCol - 1] = "[" + to_string(move) + "]";
			move++;
		}

	}

	else if (grid[currentRow][currentCol] == queen)
	{
		int move = 1;
		for (int i = 1; i < 8; i++)
		{
			if (grid[currentRow - i][currentCol] == "[ ]" && currentRow - i >= 0)
			{
				grid[currentRow - i][currentCol] = "[" + to_string(move) + "]";
				move++;
			}
		}

		for (int i = 1; i < 8; i++)
		{
			if (grid[currentRow - i][currentCol - i] == "[ ]" && currentRow - i >= 0 && currentCol - i >= 0)
			{
				grid[currentRow - i][currentCol - i] = "[" + to_string(move) + "]";
				move++;
			}

		}

		for (int i = 1; i < 8; i++)
		{
			if (grid[currentRow - i][currentCol + i] == "[ ]" && currentRow - i >= 0 && currentCol + i <= 7)
			{
				grid[currentRow - i][currentCol + i] = "[" + to_string(move) + "]";
				move++;
			}

		}

		for (int i = 1; i < 8; i++)
		{
			if (grid[currentRow + i][currentCol] == "[ ]" && currentRow + i <= 7)
			{
				grid[currentRow + i][currentCol] = "[" + to_string(move) + "]";
				move++;
			}


		}
		for (int i = 1; i < 8; i++)
		{
			if (grid[currentRow + i][currentCol - i] == "[ ]" && currentRow + i <= 7 && currentCol - i >= 0)
			{
				grid[currentRow + i][currentCol - i] = "[" + to_string(move) + "]";
				move++;
			}

		}

		for (int i = 1; i < 8; i++)
		{
			if (grid[currentRow + i][currentCol + i] == "[ ]" && currentRow + i <= 7 && currentCol + i <= 7)
			{
				grid[currentRow + i][currentCol + i] = "[" + to_string(move) + "]";
				move++;
			}
		}
		for (int i = 1; i < 8; i++)
		{
			if (grid[currentRow][currentCol + i] == "[ ]" && currentCol + i <= 7)
			{
				grid[currentRow][currentCol + i] = "[" + to_string(move) + "]";
				move++;
			}

		}
		for (int i = 1; i < 8; i++)
		{
			if (grid[currentRow][currentCol - i] == "[ ]" && currentCol - i >= 0)
			{
				grid[currentRow][currentCol - i] = "[" + to_string(move) + "]";
				move++;
			}

		}
	}
}

void Gameplay::mPawn(std::string grid[][8], int currentRow, int currentCol, int numChoice)
{
	for (int row = 0; row < 8; row++) {
		for (int col = 0; col < 8; col++) {
			if (grid[row][col] == "[" + to_string(numChoice) + "]")
			{
				grid[row][col] = pawn;
			}
			if (grid[row][col] == "[1]")
			{
				grid[row][col] = "[ ]";
			}
		}
	}
	grid[currentRow][currentCol] = "[ ]";
}
void Gameplay::mRook(std::string grid[][8], int currentRow, int currentCol, int numChoice)
{
	for (int row = 0; row < 8; row++) {
		for (int col = 0; col < 8; col++) {
			if (grid[row][col] == "[" + to_string(numChoice) + "]")
			{
				grid[row][col] = rook;
			}
			if (grid[row][col] == "[1]" || grid[row][col] == "[2]" || grid[row][col] == "[3]"
				|| grid[row][col] == "[4]" || grid[row][col] == "[5]" || grid[row][col] == "[6]"
				|| grid[row][col] == "[7]" || grid[row][col] == "[8]" || grid[row][col] == "[9]"
				|| grid[row][col] == "[10]" || grid[row][col] == "[11]" || grid[row][col] == "[12]"
				|| grid[row][col] == "[13]" || grid[row][col] == "[14]")
			{
				grid[row][col] = "[ ]";
			}
		}
	}
	grid[currentRow][currentCol] = "[ ]";
}

void Gameplay::mKnight(std::string grid[][8], int currentRow, int currentCol, int numChoice)
{
	for (int row = 0; row < 8; row++) {
		for (int col = 0; col < 8; col++) {
			if (grid[row][col] == "[" + to_string(numChoice) + "]")
			{
				grid[row][col] = knight;
			}
			if (grid[row][col] == "[1]" || grid[row][col] == "[2]" || grid[row][col] == "[3]"
				|| grid[row][col] == "[4]" || grid[row][col] == "[5]" || grid[row][col] == "[6]"
				|| grid[row][col] == "[7]" || grid[row][col] == "[8]")
			{
				grid[row][col] = "[ ]";
			}
		}
	}
	grid[currentRow][currentCol] = "[ ]";
}

void Gameplay::mBishop(std::string grid[][8], int currentRow, int currentCol, int numChoice)
{
	for (int row = 0; row < 8; row++) {
		for (int col = 0; col < 8; col++) {
			if (grid[row][col] == "[" + to_string(numChoice) + "]")
			{
				grid[row][col] = bishop;
			}
			if (grid[row][col] == "[1]" || grid[row][col] == "[2]" || grid[row][col] == "[3]"
				|| grid[row][col] == "[4]" || grid[row][col] == "[5]" || grid[row][col] == "[6]"
				|| grid[row][col] == "[7]" || grid[row][col] == "[8]" || grid[row][col] == "[9]" || grid[row][col] == "[10]" || grid[row][col] == "[11]"
				|| grid[row][col] == "[12]" || grid[row][col] == "[13]" || grid[row][col] == "[14]")
			{
				grid[row][col] = "[ ]";
			}
		}
	}
	grid[currentRow][currentCol] = "[ ]";
}

void Gameplay::mKing(std::string grid[][8], int currentRow, int currentCol, int numChoice)
{
	for (int row = 0; row < 8; row++) {
		for (int col = 0; col < 8; col++) {
			if (grid[row][col] == "[" + to_string(numChoice) + "]")
			{
				grid[row][col] = king;
			}
			if (grid[row][col] == "[1]" || grid[row][col] == "[2]" || grid[row][col] == "[3]"
				|| grid[row][col] == "[4]" || grid[row][col] == "[5]" || grid[row][col] == "[6]"
				|| grid[row][col] == "[7]" || grid[row][col] == "[8]")
			{
				grid[row][col] = "[ ]";
			}
		}
	}
	grid[currentRow][currentCol] = "[ ]";
}

void Gameplay::mQueen(std::string grid[][8], int currentRow, int currentCol, int numChoice)
{
	for (int row = 0; row < 8; row++) {
		for (int col = 0; col < 8; col++) {
			if (grid[row][col] == "[" + to_string(numChoice) + "]")
			{
				grid[row][col] = queen;
			}
			if (grid[row][col] == "[1]" || grid[row][col] == "[2]" || grid[row][col] == "[3]"
				|| grid[row][col] == "[4]" || grid[row][col] == "[5]" || grid[row][col] == "[6]"
				|| grid[row][col] == "[7]" || grid[row][col] == "[8]" || grid[row][col] == "[9]" || grid[row][col] == "[10]" || grid[row][col] == "[11]"
				|| grid[row][col] == "[12]" || grid[row][col] == "[13]" || grid[row][col] == "[14]" || grid[row][col] == "[15]" || grid[row][col] == "[16]" || grid[row][col] == "[17]"
				|| grid[row][col] == "[18]" || grid[row][col] == "[19]" || grid[row][col] == "[20]"
				|| grid[row][col] == "[21]" || grid[row][col] == "[22]" || grid[row][col] == "[23]" || grid[row][col] == "[24]" || grid[row][col] == "[25]"
				|| grid[row][col] == "[26]" || grid[row][col] == "[27]" || grid[row][col] == "[28]" || grid[row][col] == "[29]" || grid[row][col] == "[30]")
			{
				grid[row][col] = "[ ]";
			}
		}
	}
	grid[currentRow][currentCol] = "[ ]";
}


void Chess::girdLayout(string board[8][8])
{
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			board[i][j] = "[ ]";
		}
	}
	for (int j = 0; j < 8; j++)
	{
		board[6][j] = pawn;
	}
	board[7][0] = rook;
	board[7][1] = knight;
	board[7][2] = bishop;
	board[7][3] = queen;
	board[7][4] = king;
	board[7][5] = bishop;
	board[7][6] = knight;
	board[7][7] = rook;

}