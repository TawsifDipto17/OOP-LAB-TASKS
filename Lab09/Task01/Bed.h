#pragma once
#include "Furniture.h"

enum BEDSZ
{
    Single,SemiDouble,Double
};

class Bed :
    public Furniture
{
private:
    BEDSZ BedSize;
public:
    void setbedsize(BEDSZ val);
    int getbedsize();
    Bed(int price, float disc, string mat,BEDSZ siz):Furniture("Bed", price, disc, mat) {
        BedSize = siz;
    }
    void productDetails();
};

