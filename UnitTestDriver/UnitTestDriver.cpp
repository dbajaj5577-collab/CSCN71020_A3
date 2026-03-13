#include "pch.h"
#include "CppUnitTest.h"
#include "../Game/game.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestDriver
{
	TEST_CLASS(UnitTestDriver)
	{
	public:
		// Test cases of DRAW
		TEST_METHOD(TestMethodforDRAW1)
		{
			Assert::AreEqual(STR_DRAW, playGame(STR_ROCK, STR_ROCK));
		}
		TEST_METHOD(TestMethodforDRAW2)
		{
			Assert::AreEqual(STR_DRAW, playGame(STR_SISSOR, STR_SISSOR));
		}
		TEST_METHOD(TestMethodforDRAW3)
		{
			Assert::AreEqual(STR_DRAW, playGame(STR_PAPER, STR_PAPER));
		}
		TEST_METHOD(TestMethodforINVALID1)
		{
			Assert::AreEqual(STR_INVALID, playGame("DOG","COW"));
		}
		TEST_METHOD(TestMethodforINVALID2)
		{
			Assert::AreEqual(STR_INVALID, playGame("rock", STR_ROCK));
		}
		TEST_METHOD(TestMethodforPLAYER1TOWIN1)
		{
			Assert::AreEqual(STR_PLAYER1, playGame(STR_PAPER, STR_ROCK));
		}
		TEST_METHOD(TestMethodforPLAYER1TOWIN2)
		{
			Assert::AreEqual(STR_PLAYER1, playGame(STR_ROCK, STR_SISSOR));
		}
		TEST_METHOD(TestMethodforPLAYER1TOWIN3)
		{
			Assert::AreEqual(STR_PLAYER1, playGame(STR_SISSOR, STR_PAPER));
		}
		//test cases of player 2 win
		TEST_METHOD(TestMethodforPLAYER2TOWIN1)
		{
			Assert::AreEqual(STR_PLAYER2, playGame(STR_SISSOR, STR_ROCK));
		}
		TEST_METHOD(TestMethodforPLAYER2TOWIN2)
		{
			Assert::AreEqual(STR_PLAYER2, playGame(STR_ROCK, STR_PAPER));
		}
		TEST_METHOD(TestMethodforPLAYER2TOWIN3)
		{
			Assert::AreEqual(STR_PLAYER2, playGame(STR_PAPER, STR_SISSOR));
		}
	};
}
