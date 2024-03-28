#include "TicTacToe.h"

TicTacToe::TicTacToe()
{
	std::cout << "Enter Player 1 name" << '\n';
	std::getline(std::cin, player1);
	std::cout << "Enter Player 2 name" << '\n';
	std::getline(std::cin, player2);
}
TicTacToe::TicTacToe(std::string const& player1_name, std::string const& player2_name) : player1{ player1_name },
																						 player2{ player2_name }
{
}

// returns true if token was successfully placed, false otherwise
bool TicTacToe::placeToken(int position)
{
	// Check if position is valid
	if (position < 1 || position > 9)
		return false;
	// Check if position is available
	for (int i = 0; i < arrayWidth; i++)
	{
		for (int j = 0; j < arrayLength; j++)
		{
			if (position == (static_cast<int>(board[i][j]) - '0'))
			{
				board[i][j] = token;
				switchToken();
				counter++;
				checkWinner();
				return true;
			}
		}
	}
	return false;

}

void TicTacToe::switchToken()
{
	if (token == 'X')
	{
		token = 'O';
	}
	else
	{
		token = 'X';
	}
}

void TicTacToe::checkWinner()
{
	// Horizontal Check
	if (board[0][0] == board[0][1] && board[0][1] == board[0][2])
	{
		winnerFound = true;
	}
	else if (board[1][0] == board[1][1] && board[1][1] == board[1][2])
	{
		winnerFound = true;

	}
	else if (board[2][0] == board[2][1] && board[2][1] == board[2][2])
	{
		winnerFound = true;
	}
		//Vertical Checks
	else if (board[0][0] == board[1][0] && board[1][0] == board[2][0])
	{
		winnerFound = true;
	}
	else if (board[0][1] == board[1][1] && board[1][1] == board[2][1])
	{
		winnerFound = true;

	}
	else if (board[0][2] == board[1][2] && board[1][2] == board[2][2])
	{
		winnerFound = true;
	}
		// Diagonal Checks
	else if (board[0][0] == board[1][1] && board[1][1] == board[2][2])
	{
		winnerFound = true;
	}
	else if (board[0][2] == board[1][1] && board[1][1] == board[2][0])
	{
		winnerFound = true;
	}
	else if (counter == 9)
	{
		token = 'T'; // If 9 moves have been played, it's a tie
	}

}
std::array<std::array<char, 3>, 3> TicTacToe::getBoard()
{
	return board;
}
const std::string& TicTacToe::getPlayer1() const
{
	return player1;
}
const std::string& TicTacToe::getPlayer2() const
{
	return player2;
}
char TicTacToe::getToken() const
{
	return token;
}
bool TicTacToe::isWinnerFound() const
{
	return winnerFound;
}