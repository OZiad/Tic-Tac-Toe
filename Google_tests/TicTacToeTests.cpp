#include "gtest/gtest.h"
#include "../srcTwo/TicTacToe.h"

class TicTacToeTest : public ::testing::Test
{
 protected:
	TicTacToe game = TicTacToe{ "player1", "player2" };
	void SetUp() override
	{
	}
};
TEST_F(TicTacToeTest, CheckPlayerNames)
{
	EXPECT_EQ(game.getPlayer1(), "player1");
	EXPECT_EQ(game.getPlayer2(), "player2");
}
TEST_F(TicTacToeTest, VerifyTokenIsPlaced)
{
	game.placeToken(4);
	std::array<std::array<char, 3>, 3> board = game.getBoard();
	ASSERT_EQ(board[1][0], 'X');
}

TEST_F(TicTacToeTest, CheckTokenIsSwapped)
{
	game.switchToken();
	ASSERT_EQ(game.getToken(), 'O');
}