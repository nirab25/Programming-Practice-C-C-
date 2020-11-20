#include <iostream>
#include <stdio.h>
#include "includes.h"

using namespace std;

int main()
{
    cout << "Hello world!" << endl;

    checkArmstrongNumber(153);
    checkArmstrongNumber(123);

    printf("\nSquare Root of 144 is %.4f", SquareRoot(144));
    printf("\nSquare Root of 1253 is %.4f", SquareRoot(1253));

    //4 decimal 5 floating point
    printf("\nSquare Root of 1253 is %4.5f", SquareRoot(66521));

    //stack
    printf("\nPushing elements into the stack\n1\n2\n3\n\n");
	push(1);
	push(2);
	push(3);

	printf("Displaying elements of the stack -\n");
	display();
	printf("The top of the stack = %d\n\n",peek());
	printf("Pop the top of the stack = %d\n\n",pop());
	printf("Pop the top of the stack = %d\n\n",pop());
	printf("Displaying elements of the stack -\n");

	display();
    return 0;
}
