#pragma once
#include "MonthlyDepositScheme.h"
class InitialDepositMDS :
    public MonthlyDepositScheme
{
private:
    float maximuminterest;
    float initialDepositAmount;
public:
    float getmaxinterest();
    void setmaxinterest(float val);
    float getiniDeposit();
    void setiniDeposit(float val);
    void Display();
};

