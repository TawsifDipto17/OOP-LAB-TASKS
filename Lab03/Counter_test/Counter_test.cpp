#include "pch.h"
#include "CppUnitTest.h"
#include "../Task1/Counter.h"
#include"../Task1/Counter.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Countertest
{
	TEST_CLASS(Countertest)
	{
	public:
		Counter c;
		TEST_METHOD(setIncremet)
		{
			c.setIncrementStep(5);
			Assert::AreEqual(c.getStep(), 5);
		}
		TEST_METHOD(getcount)
		{
			Assert::AreEqual(c.getCount(), 0);
		}
		TEST_METHOD(increment)
		{
			c.setIncrementStep(5);
			c.increment();
			Assert::AreEqual(c.getCount(), 5);
		}
		TEST_METHOD(resetcount)
		{
			c.resetCount();
			Assert::AreEqual(c.getCount(), 0);
		}
	};
}
