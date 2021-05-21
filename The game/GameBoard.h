#pragma once

GameBoard::GameBoard()
{
		cout << "\n\n\tTic Tac Toe\n\n";
		cout << "\nPlayer 1 [X] & Player 2 [O]\n\n";
		cout << "     |     |     \n";
		cout << " " << board[0][0] << "   |   " << board[0][1] << " | " << board[0][2] << "\n";
		cout << "_____|_____|_____\n";
		cout << "     |     |     \n";
		cout << " " << board[1][0] << "   |   " << board[1][1] << " | " << board[1][2] << "\n";
		cout << "_____|_____|_____\n";
		cout << "     |     |     \n";
		cout << " " << board[2][0] << "   |   " << board[2][1] << " | " << board[2][2] << "\n";
		cout << "     |     |     \n";
	

}

