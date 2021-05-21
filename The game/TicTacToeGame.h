#pragma once

TicTacToeGame::TicTacToeGame() {
	string line;
	ifstream myfile("ticrules.txt");


	if (myfile.is_open())
	{
		while (myfile.good())
		{
			getline(myfile, line);
			cout << line << endl;

		}
		myfile.close();

	}

	else cout << "unable to open file";
}