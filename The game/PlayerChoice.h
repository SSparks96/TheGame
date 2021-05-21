#pragma once


PlayerChoice::PlayerChoice()
{

	if (symbol == 'X')
	{
		cout << "Player 1's [X] turn: ";
		cin >> choice;
	}
	else if (symbol == 'O')
	{
		cout << "Player 2's [O] turn: ";
		cin >> choice;
	}

	switch (choice)
	{
	case 1: row = 0; column = 0;
		break;
	case 2: row = 0; column = 1;
		break;
	case 3: row = 0; column = 2;
		break;
	case 4: row = 1; column = 0;
		break;
	case 5: row = 1; column = 1;
		break;
	case 6: row = 1; column = 2;
		break;
	case 7: row = 2; column = 0;
		break;
	case 8: row = 2; column = 1;
		break;
	case 9: row = 2; column = 2;
		break;
	default:
		cout << "What kind of move was that?";
	}

	if (symbol == 'X' && board[row][column] != 'X' && board[row][column] != 'O')
	{
		board[row][column] = 'X';
		symbol = 'O';
	}
	else if (symbol == 'O' && board[row][column] != 'X' && board[row][column] != 'O')
	{
		board[row][column] = 'O';
		symbol = 'X';
	}
	else
	{
		cout << "That spot is taken! Please choose another!\n\n";
		PlayerChoice();
	}
	GameBoard();
}
