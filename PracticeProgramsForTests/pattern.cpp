#include<stdio.h>
#include "includes.h"

void printTraiangle(int n)
{
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			printf("%d", j);
		}
		printf("\n");
	}

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			printf("%d", i);
		}
		printf("\n");
	}
}

void printPyramid(int n)
{
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n-i; j++)
		{
			printf(" ");
		}

		for (int j = 1; j <= 2 * i - 1; j++)
		{
			printf("*");
		}

		printf("\n");
	}
}

void printPyramidIncremental(int n)
{
	int t, i, j;

	//i=row, j=col
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n - i; j++)
		{
			printf(" ");
		}

		t = i;

		for (j = 1; j <= i; j++)
		{
			printf("%d", t);
			t++;
		}

		t -= 2;

		for (j = 1; j < i; j++)
		{
			printf("%d", t);
			t--;
		}

		printf("\n");
	}
}

void printDiamond(int n)
{
	int i, j;

	//i=row, j=col
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n - i; j++)
		{
			printf(" ");
		}

		for (j = 1; j <= 2*i-1; j++)
		{
			printf("*");
		}

		printf("\n");
	}

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf(" ");
		}

		for (j = 1; j <= 2 * (n-i) - 1; j++)
		{
			printf("*");
		}

		printf("\n");
	}
}

void printPascalTriangle(int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= (n - i) - 2; j++)
		{
			printf(" ");
		}
		
		for (int j = 0; j <= i; j++)
		{
			printf("%ld ", factorial(i) / (factorial(j) * factorial(i - j)));
		}

		printf("\n");
	}
}