#include "pch.h"
#include "CppUnitTest.h"
#include"../Task04/Time.h"
#include"../Task04/Time.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TimeTest
{
	TEST_CLASS(TimeTest)
	{
	public:
		
		Time var;

		TEST_METHOD(getHour)
		{
			var.reset(2, 3, 4);
			int H;
			H = var.hours();
			Assert::AreEqual(2, H);
		}
		TEST_METHOD(getMin)
		{
			var.reset(2, 3, 4);
			int M;
			M = var.minutes();
			Assert::AreEqual(3, M);
		}
		TEST_METHOD(getSec)
		{
			var.reset(2, 3, 4);
			int S;
			S = var.seconds();

			Assert::AreEqual(4, S);

		}
		TEST_METHOD(reset)
		{
			var.reset(12, 1, 2);
			int H, M, S;
			H = var.hours();
			M = var.minutes();
			S = var.seconds();
			Assert::AreEqual(12, H);
			Assert::AreEqual(1, M);
			Assert::AreEqual(2, S);
		}
		TEST_METHOD(advance)

		{
			var.reset(23, 59, 59);
			var.advance(2, 3, 4);
			int cH, cM, cS;
			cH = var.hours();
			cM = var.minutes();
			cS = var.seconds();
			Assert::AreEqual(2, cH);
			Assert::AreEqual(3, cM);
			Assert::AreEqual(3, cS);

		}
	};
}
