#include<stdio.h>
void tower(int n,char S,char H,char D){
    if(n==0) return;
 tower(n-1,S,D,H);
 printf("%C -> %C\n",S,D);
 tower(n-1,H,S,D);
 return;
}
int main(){
    int n;
    printf("enter no of discs : ");
    scanf("%d",&n);
    tower(n,'A','B','C');
}