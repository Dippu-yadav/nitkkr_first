#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define size 5
int queue[size];
int start = -1;
int end = -1;

void push(int x)
{
    if (start == -1)
    {
        start = 0;
        end = 0;
    }
    if (end < size)
    {
        queue[end] = x;
        end += 1;
    }
    else
        printf("Queue is full");
}
void pop()
{
    if (start == -1)
        printf("Queue is Already empty");

    else
        start += 1;
}
void top()
{
    printf("The topmost element is : %d\n", queue[start]);
}
void sizes()
{
    printf("Size of the queue is : %d\n", (end - start) );
}
int main()
{
    push(5);
    push(6);
    push(7);
    push(8);
    top();
    sizes();
    pop();
    top();
    sizes();
    // printf("%d",queue[0]);
    // printf("%d",queue[1]);
    // printf("%d",queue[2]);
    // printf("%d",queue[3]);
    // printf("%d",queue[4]);
}