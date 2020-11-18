#include "includes.h"
#include <stdio.h>

void leapyear(int year)
{
	if (!(year % 400))
	{
		printf("%d is a leap year.\n", year);
	}
	else if (!(year % 100))
	{
		printf("%d is not a leap year.\n", year);
	}
	else if (!(year % 4))
	{
		printf("%d is a leap year.\n", year);
	}
	else
	{
		printf("%d is not a leap year.\n", year);
	}
}