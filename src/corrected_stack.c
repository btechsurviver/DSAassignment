/* Task 6: Corrected pop()
   A status value indicates success/failure separately from the item.
   This avoids treating a valid -1 stack value as an error. */

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

/* Returns 1 on success, 0 on underflow. */
int pop(int *item)
{
    if (top == -1)
    {
        printf("Stack Underflow\n");
        return 0;
    }

    *item = stack[top--];
    return 1;
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

    push(-1); /* -1 is allowed as a valid data value */
    if (pop(&item))
        printf("Popped: %d\n", item);

    if (pop(&item))
        printf("Popped: %d\n", item);

    display();
    return 0;
}
