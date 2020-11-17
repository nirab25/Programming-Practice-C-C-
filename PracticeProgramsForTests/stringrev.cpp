#include "includes.h"

void stringrev(char str[])
{
	char c;
	int len = stringlen(str);

	for (int i = 0, j = len - 1; i < len/2; i++, j--)
	{
		c = str[i];
		str[i] = str[j];
		str[j] = c;
	}
}