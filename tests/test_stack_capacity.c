/* Test Case 2: Fill Stack to its maximum capacity */
#include <stdio.h>
#define SIZE 5
int stack[SIZE];
int top = -1;

void push(int item)
{
    if (top == SIZE - 1)
        printf("Stack Overflow\n");
    else
    {
        stack[++top] = item;
        printf("Pushed: %d\n", item);
    }
}

void display(void)
{
    int i;
    printf("Stack: ");
    for (i = 0; i <= top; i++)
        printf("%d ", stack[i]);
    printf("\n");
}

int main(void)
{
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    display();
    printf("top = %d\n", top);
    return 0;
}
