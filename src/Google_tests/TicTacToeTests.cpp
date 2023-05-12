#include "gtest/gtest.h"
#include "../srcTwo/TicTacToe.h"

class TicTacToeTest : public ::testing::Test
{
 protected:
	TicTacToe game;
	void SetUp() override
	{
		game = TicTacToe({ "player1", "player2" });
	}
};
TEST_F(TicTacToeTest, CheckPlayerNames)
{
	EXPECT_EQ(game.getPlayer1(), "player1");
	EXPECT_EQ(game.getPlayer2(), "player2");
}


