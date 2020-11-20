#include "includes.h"

double SquareRoot(int n)
{
    double precision = 0.00001, low = 0.0, mid, high;

    high = (double) n;

    while(high - low >= precision)
    {
        mid = (low + high) / 2;

        if(mid * mid > n)
            high = mid;
        else
            low = mid;
    }

    return mid;
}
