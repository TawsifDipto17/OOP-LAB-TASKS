#include "pch.h"
#include "CppUnitTest.h"
#include "../Task03/Medicine.h"
#include "../Task03/Medicine.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace MedicineTest
{
	TEST_CLASS(MedicineTest)
	{
	public:
		Medicine a;
		TEST_METHOD(assignName)
		{
			a.assignName("Napa", "Paracetamol");
			
			Assert::AreEqual(a.getname(),string("Napa"));
			Assert::AreEqual(a.getgenname(), string("Paracetamol"));
		}
		TEST_METHOD(assignPrice)
		{
			a.assignPrice(.80);
			double price = a.getPrice();
			Assert::AreEqual(price, .80);
		}
		TEST_METHOD(discountPercent)
		{
			a.setDiscountPercent(10);
			double percent = a.getDiscountPercent();
			Assert::AreEqual(10.0, percent);
		}
		TEST_METHOD(getSellingPrice)
		{
			int nos = 20;
			double x = a.getSellingPrice(nos);
			double price = a.getPrice();
			double percent = a.getDiscountPercent();
			double y = (price - (percent / 100) * price) * nos;
			Assert::AreEqual(x, y);
		}
	};
}
