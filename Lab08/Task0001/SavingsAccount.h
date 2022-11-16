#pragma once
#include "Account.h"
class SavingsAccount :
    public Account
{
private:
    float interestRate=0;
    float monthlyDepositAmount=0;
    const static int accountPrefix;
    static int nextAccount;

public:
    float getinterestRate();
    void setinterestRate(float val);
    float getmonthlydeposit();
    void setmonthlydeposit(float deposit);
    string nextAccountNo();
    SavingsAccount() {
        setaccountNo(nextAccountNo());
        nextAccount++;
    }
    void Display();


};

