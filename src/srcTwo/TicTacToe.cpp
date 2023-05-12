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
const std::string& TicTacToe::getPlayer1()
{
	return player1;
}
const std::string& TicTacToe::getPlayer2()
{
	return player2;
}