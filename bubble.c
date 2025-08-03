#include<stdio.h>
int main(){
    int n;
  
    printf("Enter the size of array :");
    scanf("%d",&n);
    
    int arr[n];
    for (int i = 0; i <n; i++)
    {
        printf("enter %d no. of element",i+1);
        scanf("%d",&arr[i]);

    }
    for (int i = 0;i <n-1; i++)
    {
        for (int j = 0; j <(n-1-i); j++)
    {
        if(arr[j]>arr[j+1]){
            int c=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=c;
        }
        
    }
    
    }
     printf("Sorted Array :");
    for (int k = 0; k < n; k++)
    {
        printf("%d ",arr[k]);
    }
    return 0;    
    
}