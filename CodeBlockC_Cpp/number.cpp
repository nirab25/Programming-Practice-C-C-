#include <stdio.h>
#include <math.h>
#include "includes.h"

int pow(int x, int n)
{
    int r = 1;
    for(int i = 0; i < n; i++)
        r *= x;
    return r;
}

void checkArmstrongNumber(int n)
{
    int m = n, revn = 0, digitCount = 0;

    while(m != 0)
    {
        m /= 10;
        digitCount++;
    }

    m = n;
    while(m != 0)
    {
        revn += pow(m % 10, digitCount);
        m /= 10;
    }

    if(n == revn)
        printf("%d is a armstrong number\n", n);
    else
        printf("%d is not a armstrong number\n", n);
}

