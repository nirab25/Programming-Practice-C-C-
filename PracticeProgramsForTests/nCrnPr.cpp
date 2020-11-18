#include "includes.h"
#include<stdio.h>

long findNpr(int n, int r)
{
	return factRecursion(n) / factRecursion(n - r);
}

long findNcr(int n, int r)
{
	return factRecursion(n) / (factRecursion(r) * factRecursion(n - r));
}

void findNcrNpr(int n, int r)
{
	long ncr, npr;

	ncr = findNcr(n, r);
	npr = findNpr(n, r);

	printf("\n%dC%d = %ld\n", n, r, ncr);
	printf("%dP%d = %ld\n", n, r, npr);
}