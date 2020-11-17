#include <iostream>
#include <stdio.h>
#include "includes.h"

using namespace std;

int main()
{
    printf("Hello World!\n");

    //Test stringlen
    char str[20] = "hello";
    printf("The length of string 'hello': %d\n", stringlen(str));

    //stringrev
    stringrev(str);
    printf("The reverse of string 'hello': %s\n", str);

    return 0;
}