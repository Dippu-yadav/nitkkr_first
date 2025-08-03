// selection
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
    {
        for (int j = i; j<n; j++)
        {
           if(arr[i]>=arr[j])
           {
            int c = arr[i];
            arr[i]=arr[j];
            arr[j]=c;
           }
           else continue;
        }
    }
    printf("Sorted Array :");
    for (int k = 0; k < n; k++)
    {
        printf("%d ",arr[k]);
    }
    return 0;



}