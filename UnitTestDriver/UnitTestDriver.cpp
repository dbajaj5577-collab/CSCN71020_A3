#include "pch.h"
#include "CppUnitTest.h"
#include "../Game/game.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestDriver
{
	TEST_CLASS(UnitTestDriver)
	{
	public:

		//// write your test cases here
		TEST_METHOD(TestMethod1)
		{
			Assert::AreEqual(STR_DRAW, playGame(STR_ROCK, STR_ROCK));
		}
		TEST_METHOD(TestMethod2)
		{
			Assert::AreEqual(STR_DRAW, playGame(STR_SISSOR, STR_SISSOR));
		}
		TEST_METHOD(TestMethod3)
		{
			Assert::AreEqual(STR_DRAW, playGame(STR_PAPER, STR_PAPER));
		}
		TEST_METHOD(TestMethod4)
		{
			Assert::AreEqual(STR_INVALID, playGame("DOG","COW"));
		}
		TEST_METHOD(TestMethod5)
		{
			Assert::AreEqual(STR_PLAYER1, playGame(STR_PAPER, STR_ROCK));
		}
		TEST_METHOD(TestMethod6)
		{
			Assert::AreEqual(STR_PLAYER1, playGame(STR_ROCK, STR_SISSOR));
		}
		TEST_METHOD(TestMethod7)
		{
			Assert::AreEqual(STR_PLAYER1, playGame(STR_SISSOR, STR_PAPER));

        //test cases of player 2 win
		}
		TEST_METHOD(TestMethod8)
		{
			Assert::AreEqual(STR_PLAYER2, playGame(STR_SISSOR, STR_ROCK));
		}

		TEST_METHOD(TestMethod9)
		{
			Assert::AreEqual(STR_PLAYER2, playGame(STR_ROCK, STR_PAPER));
		}

		TEST_METHOD(TestMethod10)
		{
			Assert::AreEqual(STR_PLAYER2, playGame(STR_PAPER, STR_SISSOR));
		}
	};
}
