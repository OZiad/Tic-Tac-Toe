#include "gtest/gtest.h"
#include "../srcTwo/TicTacToe.h"

class TicTacToeTest : public ::testing::Test
{
 protected:
	TicTacToe game{ "player1", "player2" };
	void SetUp() override
	{
	}
};

