#include "pch.h"
#include "CppUnitTest.h"
#include "../Task05/BankAccount.h"
#include "../Task05/BankAccount.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace BankAccountTest
{
	TEST_CLASS(BankAccountTest)
	{
	public:
		
		BankAccount b;
		TEST_METHOD(TestCustomerDetails)
		{
			b.customerDetails();
			string x = b.getName();
			string y = "Tawsif Dipto";
			Assert::AreEqual(y, x);
			double a = b.getAccountNo();
			double b = 200041105;
			Assert::AreEqual(b, a);
		}
		TEST_METHOD(TestaccountType)
		{
			b.accountType();
			string c = "Current";
			string d = b.getAccountType();
			Assert::AreEqual(c, d);
		}
		TEST_METHOD(TestDeposit)
		{
			double y = b.getBalance() + 2500.50;
			b.deposit();
			double x = b.getBalance();
			Assert::AreEqual(y, x);
		}
		TEST_METHOD(TestWithdraw)
		{
			b.deposit();
			double e = b.getBalance() - 2000.50;
			b.withdraw();
			double f = b.getBalance();
			Assert::AreEqual(e, f);
		}
	};
}
