#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node{
    int data;
    struct node*next;
};
struct node* head=NULL;
void push(int x){
    struct node*newnode = (struct node*)malloc(sizeof(struct node));
    newnode->next=head;
    head=newnode;
    newnode->data=x;
}
void pop(){
    head=head->next;
}
void top(){
    printf("The top element is : %d\n",head->data);
}
int main(){
    push(67);
    push(35);
    push(123);
    push(68);
    push(10);
    top();
    pop();
    top();
    pop();
    top();

}