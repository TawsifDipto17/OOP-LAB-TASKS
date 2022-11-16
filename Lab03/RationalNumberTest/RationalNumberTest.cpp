#include "pch.h"
#include "CppUnitTest.h"
#include "../Task02/RationalNumber.h"
#include "../Task02/RationalNumber.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace RationalNumberTest
{
	TEST_CLASS(RationalNumberTest)
	{
	public:
		RationalNumber num;
		TEST_METHOD(assign)
		{
			num.assign(3, 2);
			int numerator = num.get_numerator();
			int denominator = num.get_denominator();
			Assert::AreEqual(numerator, 3);
			Assert::AreEqual(denominator, 2);

		}
		TEST_METHOD(convert)
		{
			num.assign(3, 2);
			int numerator = num.get_numerator();
			int denominator = num.get_denominator();
			double val = (double)numerator / (double)denominator;
			double convert = num.convert();
			Assert::AreEqual(val, convert);
		}
		TEST_METHOD(invert)
		{
			num.assign(3, 2);
			int prev_numerator = num.get_numerator();
			int prev_denominator = num.get_denominator();
			num.invert();
			int current_numerator = num.get_numerator();
			int current_denominator = num.get_denominator();
			Assert::AreEqual(prev_numerator, current_denominator);
			Assert::AreEqual(prev_denominator, current_numerator);
		}
	};
}
