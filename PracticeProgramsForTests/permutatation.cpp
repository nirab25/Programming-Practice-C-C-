#include "includes.h"
#include <stdio.h>

void swap(char* a, char* b)
{
	char t;
	t = *a;
	*a = *b;
	*b = t;
}

void permutate(char* str, int l, int r)
{
	if (l == r)
	{
		printf("%s\n", str);
	}
	else
	{
		for (int i = l; i <= r; i++)
		{
			swap(str+l, str+i);
			permutate(str, l + 1, r);
			swap(str + l, str + i);
		}
	}
}