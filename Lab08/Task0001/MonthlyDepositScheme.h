#pragma once
#include "Account.h"
class MonthlyDepositScheme :
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
    float getmonthlyDeposit();
    void setmonthlyDeposit(float val);
    string nextAccountNo();
    MonthlyDepositScheme() {
        setaccountNo(nextAccountNo());
        nextAccount++;
        
    }
    void display();

};

