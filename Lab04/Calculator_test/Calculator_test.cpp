#include "pch.h"
#include "CppUnitTest.h"
#include "../Task01/Calculator.h"
#include "../Task01/Calculator.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Calculatortest
{
	TEST_CLASS(Calculatortest)
	{
	public:
		Calculator c;
		TEST_METHOD(getvalue)
		{
			int a = c.getValue();
			Assert::AreEqual(a, 0);
		}
		TEST_METHOD(settvalue)
		{
			c.setValue(10);
			Assert::AreEqual(c.getValue(), 10);
		}
		TEST_METHOD(add)
		{
			c.setValue(10);
			c.add(5);
			Assert::AreEqual(c.getValue(), 15);
		}
		TEST_METHOD(sub)
		{
			c.setValue(10);
			c.subtract(5);
			Assert::AreEqual(c.getValue(), 5);
		}
		TEST_METHOD(mult)
		{
			c.setValue(10);
			c.multiply(5);
			Assert::AreEqual(c.getValue(), 50);
		}
		TEST_METHOD(div)
		{
			c.setValue(10);
			c.divideBy(5);
			Assert::AreEqual(c.getValue(), 2);
		}
		TEST_METHOD(clr)
		{
			c.setValue(10);
			c.clear();
			Assert::AreEqual(c.getValue(), 0);
		}
		TEST_METHOD(ad)
		{
			c.setValue(10);
			c.add(5);
			Assert::AreEqual(c.getValue(), 15);
		}
		TEST_METHOD(disp)
		{
			c.setValue(10);
			c.display();
			string a = "Calculator display 10";
			Assert::AreEqual(c.display(), a);
		}
	};
}
