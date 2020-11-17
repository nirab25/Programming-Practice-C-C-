#include<stdio.h>
#include "includes.h"

int isPrime(int n)
{
	for (int i = 2; i <= n / 2; i++)
	{
		if (!(n % i))
		{
			return 0;
		}
	}

	return 1;
}

void printRangePrime(int start, int end)
{
	for (int i = start; i < end; i++)
	{
		if (isPrime(i))
		{
			printf("%d ", i);
		}
	}
}