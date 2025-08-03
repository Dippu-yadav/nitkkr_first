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
   
    int x;
    printf("enter no. you want to delete :");
    scanf("%d",&x);
for (int k = 0; k <n; k++)
{
    if(arr[k]==x)
    {
        for(int x=k;x<n-1;x++)
        arr[k]=arr[k+1];

    }
    n--;
}
 printf("Array in acc. order after deletion :\n");
    for (int i = 0; i <n; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}