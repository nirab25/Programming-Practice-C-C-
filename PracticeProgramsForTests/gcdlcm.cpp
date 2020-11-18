#include "includes.h"
#include <stdio.h>


void gcdLcm(int x, int y)
{
	int a, b, gcd, lcm, t;

	a = x;
	b = y;

	while (b != 0)
	{
		t = b;
		b = a%b;
		a = t;
	}

	gcd = a;
	lcm = x * y / gcd;

	printf("GCD of %d and %d is %d\n", x, y, gcd);
	printf("LCM of %d and %d is %d\n", x, y, lcm);
}

int gcd(int x, int y)
{
	if (y == 0)
		return x;

	return gcd(y, x % y);
}

void gcdLcmRecursion(int x, int y)
{
	int hcf, lcm;

	hcf = gcd(x, y);
	lcm = x * y / hcf;

	printf("GCD of %d and %d using recursion is %d\n", x, y, hcf);
	printf("LCM of %d and %d using recursion is %d\n", x, y, lcm);
}