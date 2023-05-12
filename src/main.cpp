#include <iostream>
#include "./srcTwo/TicTacToe.h"
#include "./srcTwo/Gui.h"

int main()
{
	TicTacToe game;
	Gui g{ game };
	g.startGame();
}