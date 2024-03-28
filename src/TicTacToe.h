#ifndef TIC_TAC_TOE_SRC_SRCTWO_TICTACTOE_H_
#define TIC_TAC_TOE_SRC_SRCTWO_TICTACTOE_H_

#include <iostream>
#include <array>

class TicTacToe
{
 private:
	std::array<std::array<char, 3>, 3> board{{{ '1', '2', '3' },
											  { '4', '5', '6' },
											  { '7', '8', '9' }}};
	bool winnerFound = false;
	char token = 'X';
	std::string player1{};
	std::string player2{};
	int counter = 0;
	int arrayWidth = 3;
	int arrayLength = 3;
 public:
	TicTacToe(const std::string& player1_name, const std::string& player2_name);
	TicTacToe();
	const std::string& getPlayer1() const;
	const std::string& getPlayer2() const;
	bool isWinnerFound() const;
	char getToken() const;
	void switchToken();
	bool placeToken(int position);
	void checkWinner();
	std::array<std::array<char, 3>, 3> getBoard();
};
#endif
