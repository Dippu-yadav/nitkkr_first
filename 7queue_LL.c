#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL;
struct node *tail = NULL;

void enqueue(int x)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    if (head == NULL)
    {head = tail = newnode;}

    else{
    tail->next=newnode;
    tail = newnode;}

    newnode->next = NULL;
    newnode->data = x;
    
}
void dequeue()
{   
    head = head->next;
}
void top()
{
    printf("The top element is : %d \n", head->data);
}
int main()
{
    enqueue(10);
    enqueue(58);
    enqueue(71);
    enqueue(50);
    top();
    dequeue();
    top();
}