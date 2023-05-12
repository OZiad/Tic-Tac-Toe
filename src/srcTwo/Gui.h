#ifndef UNTITLED_GUI_H
#define UNTITLED_GUI_H

#include "TicTacToe.h"

class Gui
{
 private:
	TicTacToe& game;
	void printBoard();
	void requestValidPosition(int position);
	void printWinner();
	bool isGameOver();

 public:
	explicit Gui(TicTacToe& board);
	void startGame();
};

#endif //UNTITLED_GUI_H
