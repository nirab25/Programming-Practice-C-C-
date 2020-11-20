#include<stdio.h>
#include "includes.h"

#define MAX 100

int top = -1;
int stack[MAX];
//malloc needs stdlib.h for int*
//int* stack = (int*) malloc(MAX*sizeof(int));

int pop()
{
    if(top == -1)
    {
        printf("Stack is empty.\n");
        return -1;
    }

    return stack[top--];
}

int peek()
{
    if(top == -1)
    {
        printf("Stack is empty.\n");
        return -1;
    }

    return stack[top];
}

void push(int x)
{
    if(top == MAX)
    {
        printf("Max size overflow.\n");
        return;
    }

    stack[++top] = x;
}

void display()
{
    for(int i = 0; i <= top; i++)
        printf("stack[%d]=%d\n",i, stack[i]);

}
void reset()
{
    top = -1;
}

int size()
{
    return top;
}
