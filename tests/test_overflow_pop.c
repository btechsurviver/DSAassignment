/* Test Case 3: Overflow attempt followed by pop */
#include <stdio.h>
#define SIZE 5
int stack[SIZE];
int top = -1;

void push(int item)
{
    if (top == SIZE - 1)
        printf("Stack Overflow\n");
    else
        stack[++top] = item;
}

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
    int i;
    printf("Stack: ");
    for (i = 0; i <= top; i++)
        printf("%d ", stack[i]);
    printf("\n");
}

int main(void)
{
    int item;
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    push(6); /* Overflow */
    item = pop();
    printf("Popped: %d\n", item);
    display();
    return 0;
}
