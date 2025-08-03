#include <stdio.h>
#define size 5

int stack[size];
int top = -1;

void push(int *top, int stack[])
{
    if (*top >= size - 1)

        printf("full\n");

    else
    {
        (*top)++;
        int n;
        printf("enteer value\n");
        scanf("%d", &n);
        stack[*top] = n;
    }
}
void pop(int *top, int stack[])
{
    if (*top == -1)
        printf("empty\n");

    else
    {
        printf("%d\n", stack[*top]);
        (*top)--;
    }
}

void display(int top, int stack[])
{
    for (int i = 0; i <= top; i++)
    {
        printf("%d\n", stack[i]);
    }
}
void peep(int top, int stack[])
{
    if (top == -1)
    {
        printf("Stack is empty\n");
    }
    else
        printf("%d\n", stack[top]);
}
int main()
{

    int ch;
    do
    {
        printf("1:Push\n2:pop\n3:peek\n4:display\n");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            push(&top, stack);
            break;
        case 2:
            pop(&top, stack);
            break;
        case 3:
            peep(top, stack);
            break;
        case 4:
            display(top, stack);
            break;
        default:
            printf("Invlid input ");
            break;
        }
    } while (ch != 0);

    // getch();
}