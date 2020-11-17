#include "includes.h"
#include<stdio.h>

#define MAX 1000

int factorial(int n)
{
	int f = 1;

	for (int i = 1; i <= n; i++)
	{
		f *= i;
	}

	return f;
}

long factRecursion(int n)
{
	long f;

	if (n <= 1)
	{
		return 1;
	}

	return n * factRecursion(n - 1);
}

int multiply(int x, int result[], int size)
{
	int carry = 0;

	for (int i = 0; i < size; i++)
	{
		int prod = result[i] * x + carry;

		result[i] = prod % 10;
		carry = prod / 10;
	} 

	while (carry)
	{
		result[size] = carry % 10;
		carry = carry / 10;
		size++;
	}

	return size;
}

void factLargeNumber(int n)
{
	int result[MAX];
	int size = 1;

	result[0] = 1;

	for (int i = 2; i <= n; i++) 
	{
		size = multiply(i, result, size);
	}

	printf("Factorial of %d:\n", n);
	for (int i = size-1; i >= 0; i--)
	{
		printf("%d", result[i]);
	}
}