#include "gtest/gtest.h"
#include "../srcTwo/TicTacToe.h"

class TicTacToeTest : public ::testing::Test
{
 protected:
	void SetUp() override
	{
		TicTacToe game{ "player1", "player2" };
	}
};

