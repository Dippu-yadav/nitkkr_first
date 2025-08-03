#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *link;
} node;
node *head = NULL;
void push(int x)
{

    node *newnode = (node *)malloc(sizeof(node));
    newnode->data = x;
    newnode->link = head;
    head = newnode;
}
void display()
{
    node *temp = head;
    if (temp == NULL)
        printf("Stack is empty");
    else
    {
        while (temp != NULL)
        {
            printf("%d ", temp->data);
            temp = temp->link;
        }
        printf("\n");
    }
}
void peep(){
    if (head==NULL)
    printf("stack is empty");
    else{
        printf("top element is %d :",head->data);
    }
    
}
void pop(){
    node *temp;
    temp=head;
    head=head->link;
    free(temp);

}
int main()
{   push(3);
    push(10);
    push(19);
    push(99);
    display();
    pop();
    display();
    pop();
    display();
    return 0;
}