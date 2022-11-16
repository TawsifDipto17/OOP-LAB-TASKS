#pragma once
#include "MonthlyDepositScheme.h"
class TwoYearMDS :
    public MonthlyDepositScheme
{
private:
    float maximuminterest;
public:
    float getmaxinterest();
    void setmaxinterest(float val);
    void Display();
};

