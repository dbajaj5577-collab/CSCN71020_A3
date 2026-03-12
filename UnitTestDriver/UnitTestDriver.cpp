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
	};
}
