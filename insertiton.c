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
   
    for (int i = 0; i <n; i++)
    {    int min=arr[i];
         int mini=i;
        for (int j =i+1;j <n;j++)
        {
            if(min>arr[j])
            {min=arr[j];
            mini=j;}
        }
        for (int k =mini;k>i;k--)
        {
            arr[k]=arr[k-1];
        }
        arr[i]=min;
        
    for (int k = 0; k < n; k++)
    {
        printf("%d ",arr[k]);
    }
    printf("\n");
    }
     
    return 0;
}