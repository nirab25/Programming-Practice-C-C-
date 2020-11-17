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

    //fibonacci
    printf("10th fibonacci number is: %d\n", fibonacciNth(10));
    printf("10th fibonacci series are:\n");
    printNfiboNumber(10);
    printf("\n10th fibonacci number using DP(Dynamic Programming): %d\n\n", fibonacciDP(10));

    //factorial
    printf("Factorial of 8: %d\n", factorial(8));
    printf("Factorial of 12 (Recursion): %ld\n", factRecursion(12));
    factLargeNumber(100);

    return 0;
}