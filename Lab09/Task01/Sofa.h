#pragma once
#include "Furniture.h"

enum SeatNum
{
    One, Two, Three, Four, Five
};

class Sofa :
    public Furniture
{
private:
    SeatNum SeatNumber;
public:
    void setsofasize(SeatNum val);
    int getsofasize();
    Sofa(int price, float disc, string mat, SeatNum siz) :Furniture("Sofa", price, disc, mat) {
        SeatNumber = siz;
    }
    void productDetails();
};

