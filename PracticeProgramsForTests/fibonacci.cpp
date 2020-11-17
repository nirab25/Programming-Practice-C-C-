#include "includes.h"
#include <stdio.h>

int fibonacciNth(int n)
{
	if (n == 0 || n == 1)
		return n;
	//f2 = f1+fo;
	return fibonacciNth(n - 1) + fibonacciNth(n - 2);
}

void printNfiboNumber(int n)
{
	for (int i = 1; i <= n; i++)
	{ 
		printf("%d ", fibonacciNth(i));
	}
}

int fibonacciDP(int n)
{
	int i;
	int fibo[1000];

	fibo[0] = 0;
	fibo[1] = 1;

	for (i = 2; i <= n; i++)
	{
		fibo[i] = fibo[i - 1] + fibo[i - 2];
	}

	return fibo[n];
}

