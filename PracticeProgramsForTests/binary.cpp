#include "includes.h"
#include<stdio.h>

void decimalToBinary(int n)
{
	int d;

	printf("\nBinary of %d is:", n);

	for (int i = 31; i >= 0; i--)
	{
		d = n >> i;
		
		if (d & 1)
		{
			printf("1");
		}
		else
		{
			printf("0");
		}
	}

	printf("\n");
}