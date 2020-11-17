#include <iostream>
#include <stdio.h>
#include "includes.h"

using namespace std;

int main()
{
    printf("Hello World!\n");

    //Test stringlen
    char str[20] = "hello";
    printf("The length of string 'hello': %d\n\n", stringlen(str));

    //stringrev
    stringrev(str);
    printf("The reverse of string 'hello': %s\n", str);

    //fibonacci
    printf("\n10th fibonacci number is: %d\n", fibonacciNth(10));
    printf("10th fibonacci series are:\n");
    printNfiboNumber(10);
    printf("\n10th fibonacci number using DP(Dynamic Programming): %d\n\n", fibonacciDP(10));

    //factorial
    printf("Factorial of 8: %d\n", factorial(8));
    printf("Factorial of 12 (Recursion): %ld\n", factRecursion(12));
    factLargeNumber(100);

    //prime
    printf("\n\nIf number is prime or not (i.e. 10):%d\n", isPrime(10));
    printf("Print prime numbers in range(10,19)\n");
    printRangePrime(10, 19);

    //shapes
    printf("\n\nSize of Triangle:5\n");
    printTraiangle(5);

    //palindrome
    printf("\nIf a number is palindrome or not:1221\n");
    isPalindromeNumber(121);

    return 0;
}