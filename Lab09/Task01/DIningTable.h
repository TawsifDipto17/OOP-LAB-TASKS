#pragma once
#include "Furniture.h"

enum Chairc
{
    TWO,FOUR,SIX
};

class DIningTable :
    public Furniture
{
private:
    Chairc ChairCount;
public:
    void setdtsize(Chairc val);
    int getdtsize();
    DIningTable(int price, float disc, string mat, Chairc siz) :Furniture("Dining Table", price, disc, mat) {
        ChairCount = siz;
    }
    void productDetails();
};

