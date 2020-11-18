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

void sumOfDigits(int n)
{
	int t = n, sum = 0;

	while (t != 0)
	{
		sum += t % 10;
		t /= 10;
	}

	printf("Sum of the digits of %d is %d.\n", n, sum);
}

int sumOfDigitsRecursion(int n)
{
	if (n == 0)
	{
		return 0;
	}

	return n % 10 + sumOfDigitsRecursion(n / 10);
}

void reverseNumber(int n)
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

int power(int x, int y)
{
	int r = 1;
	for (int i = 0; i < y; i++)
		r *= x;

	return r;
}

void isArmstrongNumber(int n)
{
	int t, sum = 0, digits = 0;

	t = n;
	while (t != 0)
	{
		t /= 10;
		digits++;
	}

	t = n;

	while (t != 0)
	{
		sum += power(t % 10, digits);
		t /= 10;
	}

	if (n == sum)
		printf("%d is an Armstrong number.\n", n);
	else
		printf("%d isn't an Armstrong number.\n", n);
}