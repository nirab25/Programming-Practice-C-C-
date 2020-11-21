#include "includes.h"
#include<stdio.h>

void callByValue(int n)
{
	n = 240;
}

void callByReference(int* p)
{
	*p = 120;
}

void callByValueRef()
{
	int a = 320;
	callByValue(a);
	printf("\nValue of a after callByValue: %d\n", a);

	a = 240;
	callByReference(&a);
	printf("Value of a after callByReference: %d\n", a);
}