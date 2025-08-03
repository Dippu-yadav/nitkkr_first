#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node*next;
};
struct node* head;


void createnode(int x){
    struct node*newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->next=head->next;
    head->next=newnode;
}
void show(struct node*ptr){
    while (ptr!=NULL)
    {
        printf("%d->",ptr->data);
        ptr=ptr->next;
    }
    printf("\n");
}
void addnode(int x){
    struct node*newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->next=head;
    head=newnode;

}
void length(struct node*ptr){
    int count=0;
    while (ptr!=NULL)
   {
    count+=1;
    ptr=ptr->next;
   }
    printf("The length of the LList is : %d\n",count);

}
void delete(struct node*ptr){
    struct node*pre=NULL;
    struct node*nex=NULL;
    while (ptr!=NULL)
    {   pre=nex;
        nex=ptr;
        ptr=ptr->next;
    }
    pre->next=ptr;
    
}
int search(struct node*ptr,int x){
    while (ptr!=NULL)
    {
        if (ptr->data==x)
            return 1;
        ptr=ptr->next;
    }
        return 0;
    
}

int main(){
    head=(struct node *)malloc(sizeof(struct node));
    head->data=0;
    head->next=NULL;
    createnode(4);
    createnode(5);
    createnode(6);
    createnode(8);
    show(head);
    addnode(999);
    show(head);
    delete(head);
    show(head);
    length(head);

    if (search(head,10))
       printf("TRUE\n");
    else printf("FALSE\n");
    
    
    delete(head);
    show(head);
    delete(head);
    show(head);
    length(head);
 return 0;
}