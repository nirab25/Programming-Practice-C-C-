#include "includes.h"

int stringlen(char str[])
{
	int i;
	for (i = 0; str[i]; i++);
	return i;
}