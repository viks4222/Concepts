/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

typedef struct Stack
{
  int top;
  int capacity;
  int *data;
  int a;
}Stack_t;


Stack_t *CreateStack(int capacity)
{
    Stack_t *stack = (Stack_t *)malloc(sizeof(Stack_t));
    
    stack->capacity = capacity;
    stack->data = (int *)malloc(sizeof(int) * capacity);
    
    stack->top = -1;
}

int is_empty(Stack_t *stack)
{
    return (stack->top == -1);
}

int is_full(Stack_t *stack)
{
    return (stack->top == stack->capacity);
}

void push(int value, Stack_t *stack)
{
    if(is_full(stack))
    {
       return; 
    }
    else
    {
        stack->data[++stack->top];
    }
}

int main()
{
    //create stack of 100 item
    Stack_t *stack = CreateStack(100);
    push(10, stack);


    return 0;
}
