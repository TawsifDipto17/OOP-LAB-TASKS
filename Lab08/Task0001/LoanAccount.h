#pragma once
#include "Account.h"
class LoanAccount :
    public Account
{
private:
    float interestRate=0;
    float monthlyDepositAmount=0;
    const static int accountPrefix;
    static int nextAccount;
public:
    float getInterest();
    void setInterest(float val);
    float getDeposit();
    void setDeposit(float val);
    string nextAccountNo();
    LoanAccount() {
        setaccountNo(nextAccountNo());
        nextAccount++;
    }

    void Display();
};

