/* Task 5: What-if analysis
   Original push(70) is changed to push(45).
   The Stack is already full, so this push still overflows. */

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
    if (top == -1)
        printf("Stack is Empty\n");
    else
    {
        printf("Stack: ");
        for (i = 0; i <= top; i++)
            printf("%d ", stack[i]);
        printf("\n");
    }
}

int main(void)
{
    int item;

    push(10);
    push(20);
    push(30);
    display();

    item = pop();
    printf("Popped: %d\n", item);

    push(40);
    push(50);
    push(60);
    push(45); /* Modified input: was push(70) */

    display();
    return 0;
}
