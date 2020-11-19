#include <stdio.h>
#include <math.h>
#include "includes.h"

void checkArmstrongNumber(int n)
{
    int m = n, revn = 0, rem, digitCount = 1;

    while(m != 0)
    {
        m /= 10;
        digitCount++;
    }

    m = n;
    while(m != 0)
    {
        rem = m % 10;
        revn = revn * 10 + math.pow(rem, digitCount);
        m /= 10;
    }

    if(n == nevn)
        printf("%d is a armstrong number\n");
    else
        printf("%d is not a armstrong number\n");
}
