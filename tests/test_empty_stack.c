/* Test Case 1: Pop and display an empty Stack */
#include <stdio.h>
#define SIZE 5
int stack[SIZE];
int top = -1;

int pop(void)
{
    if (top == -1)
    {
        printf("Stack Underflow\n");
        return -1;
    }
    return stack[top--];
}

void display(void)
{
    if (top == -1)
        printf("Stack is Empty\n");
}

int main(void)
{
    int item;
    display();
    item = pop();
    printf("Popped: %d\n", item);
    return 0;
}
