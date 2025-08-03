#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node*next;
    struct node*previous;
};
struct node*head=NULL;
struct node*tail=NULL;

void createnode(int x){
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    if (head==NULL)
        head=newnode;

    newnode->data=x;
    newnode->previous=tail;
    newnode->next=NULL;
    if (tail!=NULL)
    tail->next=newnode;
    
    tail=newnode;
}
void delete(struct node*ptr){
    ptr=ptr->previous;
    ptr->next=NULL;
    tail->previous=NULL;
    tail=ptr;
}
void display(struct node*ptr){
    while (ptr!=NULL){
        printf("%d<->",ptr->data);
        ptr=ptr->next;
    }
    printf("\n");
}
void reverse(struct node*current){
    struct node*temp;
    while (current!=NULL)
    {
    temp=current->next;
    current->next=current->previous;
    current->previous=temp;
    current=current->previous;
    }
    struct node* duplicate;
    duplicate=head;
    head=tail;
    tail=duplicate;
    
}
int main(){
    
    createnode(98);
    createnode(67);
    createnode(4);
    createnode(12);
    createnode(66);
    display(head);
    createnode(100);
    
    display(head);
    delete(tail);
    display(head);
    delete(tail);
    display(head);
    reverse(head);
    display(head);
    delete(tail);
    display(head);
    reverse(head);
    display(head);
}