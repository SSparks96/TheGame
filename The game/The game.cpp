// The game.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <Windows.h>
#include <iomanip>
#include <fstream>
#include <string>
#include <array>
#include <GameBoard.h>
#include <PlayerChoice.h>
#include <CheckGame.h>
#include <TicTacToeGame.h>

using namespace std;
//int knightstour_game();






int main(int argc, char** argv)
{
	int gametime;

	cout << "\n\n\n\t\t\t***********************Welcome to the game menu!************************\n\n\n\n\n\n\n";


	cout << "\tShall we play a game????\n\n";
	do {
		cout << "\n\n\t1. Tic Tac Toe\n\n";
		cout << "\t2. Knight's Tour\n\n";
		cout << "\t0. Exit\n\n\n";
		cout << "\tSelect a game or exit completely: \n\n";
		cin >> gametime;

		switch (gametime)
		{
		case 1:
			tictactoe_game();
			break;
		case 2:
			knightstour_game();
			break;
		case 0:

			cout << "\n\n\tWell fine be that way!!!!\n\n\n";

			return 0;
		}
	} while (gametime != 0);

	TicTacToeGame gameText;
	GameBoard newBoard;
	PlayerChoice playerTurn;
	CheckGame gameWin;
	gameWin.CheckBoard();

}

class TicTacToeGame
{
public:
	TicTacToeGame();
	

private:

};




class GameBoard
{
public:
	GameBoard();
	

private:
	char board[3][3] = { {'1','2','3'}, {'4','5','6'}, {'7','8','9'} };
};

class PlayerChoice
{
public:
	PlayerChoice();
	

private:
	char board[3][3] = { {'1','2','3'}, {'4','5','6'}, {'7','8','9'} };
	int choice;
	int row;
	int column;
	char symbol = 'X';
	char symbol = 'O';

};

class CheckGame
{
public:
	bool CheckBoard();
	CheckGame();

private:
	char board[3][3] = { {'1','2','3'}, {'4','5','6'}, {'7','8','9'} };
	bool draw = false;
	char symbol = 'X';
	char symbol = 'O';
};


