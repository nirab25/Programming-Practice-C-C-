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
    factLargeNumber(99);

    //prime
    printf("\n\nIf number is prime or not (i.e. 10):%d\n", isPrime(10));
    printf("Print prime numbers in range(10,19)\n");
    printRangePrime(10, 19);

    //shapes
    printf("\n\nShape Size:5\n");
    printTraiangle(5);
    printPyramid(5);
    printPyramidIncremental(5);
    printDiamond(5);

    //number
    printf("\nIf a number is palindrome or not:1221\n");
    isPalindromeNumber(121);
    isPalindromeNumber(1210);
    sumOfDigits(122140);
    sumOfDigits(123456789);
    printf("Sum of the digits (recursion) of %d is %d.\n", 123456789, sumOfDigitsRecursion(123456789));
    
    //GCD/HCF and LCM
    printf("\nGCD/HCF and LCM\n");
    gcdLcm(55, 11);
    gcdLcm(5, 11);
    gcdLcm(25, 3);
    gcdLcmRecursion(25, 3);

    //leap year
    printf("\n");
    leapyear(1201);
    leapyear(2000);

    //binary
    decimalToBinary(12);

    //nCr nPr
    findNcrNpr(8, 5);

    //void isArmstrongNumber(int n) 153=1^3+5^3+3^3 pow=no of digits
    printf("\n");
    isArmstrongNumber(153);
    isArmstrongNumber(56564);

    //pascal triangle
    printPascalTriangle(7);

    printf("\nPermutation of ABC:\n");
    char arr[] = "ABC";
    permutate(arr, 0, stringlen(arr)-1);

    return 0;
}