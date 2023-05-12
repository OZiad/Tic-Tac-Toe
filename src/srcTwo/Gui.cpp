#include "Gui.h"

Gui::Gui(TicTacToe& b) : game(b)
{
	std::cout << "  " << game.getPlayer1() << " VS. " << game.getPlayer2() << '\n';
	printBoard();
}

void Gui::printBoard()
{
	std::array<std::array<char, 3>, 3> array = game.getBoard();
	std::cout << "  | " << array[0][0] << " | " << array[0][1] << " | " << array[0][2] << " |" << '\n';
	std::cout << "  | " << array[1][1] << " | " << array[1][1] << " | " << array[1][2] << " |" << '\n';
	std::cout << "  | " << array[2][0] << " | " << array[2][1] << " | " << array[2][2] << " |" << '\n';
}
void Gui::printWinner()
{
	char token = game.getToken();
	if (token == 'O')
	{
		std::cout
			<< "**********************************************************************************************************"
			<< '\n' << "                                     Game Over! The winner is "
			<< game.getPlayer1() << '\n'
			<< "**********************************************************************************************************";
	}
	else if (token == 'X')
	{
		std::cout
			<< "**********************************************************************************************************"
			<< '\n' << "                                     Game Over! The winner is "
			<< game.getPlayer2() << '\n'
			<< "**********************************************************************************************************";
	}
	else
	{
		std::cout
			<< "**********************************************************************************************************"
			<< '\n' << "                                     Game Over! It's a Tie! "
			<< '\n'
			<< "**********************************************************************************************************";
	}
	exit(1);
}

void Gui::requestValidPosition(int position)
{
	while (!game.placeToken(position))
	{
		std::cout << "Please enter a valid position \n";
		std::cin >> position;
	}
	printBoard();
}

// Returns true if a winner is found or it's a tie
bool Gui::isGameOver()
{
	return game.isWinnerFound() || game.getToken() == 'T';
}
void Gui::startGame()
{
	while (!isGameOver())
	{
		int position{};
		std::cout << "Enter position for X \n";
		std::cin >> position;
		// Player 1 turn
		requestValidPosition(position);

		// Check if winner is found
		if (isGameOver())
			break;

		// Player 2 turn
		std::cout << "Enter position for O \n";
		std::cin >> position;
		requestValidPosition(position);
	}
	printWinner();

}

