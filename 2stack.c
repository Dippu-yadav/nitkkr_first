#include <stdio.h>
#define size 50
int stk[size];
int top = -1;
void push(int x){
    if(top==size-1){
        printf("stack is full");
        return;
    }
    else{
        top+=1;
        stk[top]=x;
    }
}
void pop(){
    if(top==-1){
        printf("stack is empty");
        return;
    }
    else{
        printf("the element at top:%d\n",stk[top]);
        top=top-1;
    }
}
void show(){
    for(int i=top;i>=0;i--)
    {
        printf("%d\n",stk[i]);
    }
}
int main(){
    int n;
    printf("Enter size of stack:");
    scanf("%d",&n);
    for (int i = 0; i <n; i++)
    {   int num;
        printf("Enter value of %d element:",i+1);
        scanf("%d",&num);
        push(num);
    }
    show();
    for (int i = 0; i <n; i++)
    {
    pop();  
    // show();  
    }
    
}