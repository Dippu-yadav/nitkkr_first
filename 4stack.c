#include <stdio.h>
#include <stdlib.h>
#define size 5

int arr[size];
int top = -1;

void push(int x)
{
    if (top >= size-1)
        printf("Stack is full\n");
    else
    {
        top += 1;
        arr[top] = x;
    }
}
void pop(){
    if (top==-1)
    printf("Stack is empty\n");
    else {
        printf("popped element is : %d\n",arr[top]);
        top-=1;
    }
}
void topmost(){
    printf("The top element is: %d\n",arr[top]);
}

int main()
{
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    push(60);
    
    topmost();
    pop();
    topmost();
    return 0;
}