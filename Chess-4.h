#ifndef CHESS_H
#define CHESS_H
#include <iostream>
#include <string>
#include <io.h>
#include <fcntl.h>
#include <Windows.h>
using namespace std;

class Chess
{
public:
	Chess() = default;

	string pawn = "[\xe2\x99\x99]";//"[P]";
	string rook = "[\xe2\x99\x96]";
	string knight = "[\xe2\x99\x98]";
	string bishop = "[\xe2\x99\x97]";
	string queen = "[\xe2\x99\x95]";
	string king = "[\xE2\x99\x94]";

	void girdLayout(string[8][8]);

};

class Gameplay : public Chess
{
public:
	Gameplay() {};

	void legalMoves(std::string[][8], int, int, char);
	void mPawn(std::string[][8], int, int, int);
	void mRook(std::string[][8], int, int, int);
	void mKnight(std::string[][8], int, int, int);
	void mBishop(std::string[][8], int, int, int);
	void mKing(std::string[][8], int, int, int);
	void mQueen(std::string[][8], int, int, int);

};


#endif
