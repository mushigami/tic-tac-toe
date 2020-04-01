//============================================================================
// Name        : tic-tac-toe.cpp
// Author      : 
// Version     :
// Copyright   : Free
// Description : Tic-Tac-Toe in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

//#include "Utils.h"


const int IGNORE_CHARS = 256;

const char * INPUT_ERROR_STRING = "Input error! Please try again.";

void PlayGame();
bool WantToPlayAgain();
void ShowInstructions();
char GetGuess();




int main()
{
	ShowInstructions();
	/*
		Tic-tac-toe game.
		+---+---+---+
		| 0 | 1 | 2 |
		+---+---+---+
		| 3 | 4 | 5 |
		+---+---+---+
		| 6 | 7 | 8 |
		+---+---+---+
		3x3 grid board is drawn with numbers written on it,
		and asked to start the player to play(later can be randomized)
		First player puts an 'X' and the second one puts an 'O' by pressing the number associated with the cell.
		Whenever a player can make a three in a row,column or diagonally, that player wins.
		If it's a tie then it will display "Cat game".
		After the game ends, player(s) will be prompted to restart the game.

		Top-down design
		---------------
		1) All currently occupied cells should be stored
		2) A function that determines if the game is over
		3) A function to get user input


		Players
		-------
		- Name
		- Moves

		Board
		------
		- Occupied cells
		

		Pseudo code
		-----------
		
		Step 1:

		-Main-
		----
		ShowInstructions()
		do
		{
			PlayGame(player1, player2)

		}while(WantToPlayAgain)

		Step 2:

		+---+---+---+
		|   |   |   |
		+---+---+---+
		|   |   |   |
		+---+---+---+
		|   |   |   |
		+---+---+---+
		
		-PlayGame-
		----------
		do
		{
		DrawBoard(boardCells)
			do
			{
				move = GetMove()
			}while(!IsMoveValid(move, currentPlayer))

		UpdateBoard(move, currentPlayer, otherPlayer, boardCells)
		DrawBoard(currentPlayer) // to see the result of the move 
		CheckResult(currentPlayer)

		SwitchPlayer()

		}while(!IsGameOver());

		DisplayWinner()
		

		Step 3:


	*/

	cout << "Press ENTER to quit\n";
	cin.get();
	return 0;
}


void ShowInstructions()
{

	cout << "		~~ Tic-Tac-Toe~~" << endl<<endl;
	cout << "Welcome to the game of tic-tac-toe.\n\nAim of the game to make a line of 'X' or 'O' horizontally, vertically or diagonally on the board" << endl<<endl;
	cout << "Press enter the corresponding number for the targeted cell shown as below." << endl;
	cout << "		+---+---+---+" << "		+---+---+---+" << "		+---+---+---+" << "		+---+---+---+" << endl;
	cout << "		| 0 | 1 | 2 |" << "		| X |   |   |" << "		|   |   |   |" << "		| X |   |   |" << endl;
	cout << "		+---+---+---+" << "		+---+---+---+" << "		+---+---+---+" << "		+---+---+---+" << endl;
	cout << "		| 3 | 4 | 5 |" << "		| X |   |   |" << "		|   |   |   |" << "		|   | X |   |" << endl;
	cout << "		+---+---+---+" << "		+---+---+---+" << "		+---+---+---+" << "		+---+---+---+" << endl;
	cout << "		| 6 | 7 | 8 |" << "		| X |   |   |" << "		| X | X | X |" << "		|   |   | X |" << endl;
	cout << "		+---+---+---+" << "		+---+---+---+" << "		+---+---+---+" << "		+---+---+---+" << endl;
}