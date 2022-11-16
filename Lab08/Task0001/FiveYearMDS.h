#pragma once
#include "MonthlyDepositScheme.h"
class FiveYearMDS :
    public MonthlyDepositScheme
{
private:
    float maximuminterest;
public:
    float getmaxinterest();
    void setmaxinterest(float val);
    void Display();
};


