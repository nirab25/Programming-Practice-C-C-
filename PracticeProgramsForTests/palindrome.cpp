#include<stdio.h>
#include "includes.h"

void isPalindromeNumber(int n)
{
	int t, newn = 0;

	t = n;

	while (t != 0)
	{
		newn = newn * 10;
		newn += t % 10;
		t = t / 10;
	}

	if (newn == n)
		printf("%d is a palindrome number.\n", n);
	else
		printf("%d is not a palindrome number.\n", n);
}