#pragma once
#include "Account.h"
class CurrentAccount :
    public Account
{
private:
    const static int serviceCharge;
    const static int accountPrefix;
    static int nextAccount;
public:
    string nextAccountNo();
    CurrentAccount() {
        setaccountNo(nextAccountNo());
        nextAccount++;
    }

    void Display();
};

