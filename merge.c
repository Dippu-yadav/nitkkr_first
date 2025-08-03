#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define n 20000
void merge(int arr[], int left, int mid, int right) {
    int i, j, k;
    int n1 = mid - left + 1; 
    int n2 = right - mid;

    int L[n1], R[n2];

    for (i = 0; i < n1; i++)    
        L[i] = arr[left + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    i = 0;j = 0;k = left;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}
void merges(int arr[], int left, int right) {

    if (left < right) {
        int mid = (left +right)/2;

        merges(arr, left, mid);
        merges(arr, mid + 1, right);

        merge(arr, left, mid, right);
    }
    
}
// void print_array(int arr[], int size) {
//     for (int i = 0; i < size; i++)
//         printf("%d ", arr[i]);
//     printf("\n");
// }
int main(){
    // int n;
    // printf("Enter the size of array :");
    // scanf("%d",&n);
    int arr[n];
    for (int i = 0; i <n; i++)
    {
        // printf("enter %d no. of element",i+1);
        // scanf("%d",&arr[i]);
        arr[i] = rand()%2;
    }

    clock_t start = clock();
    merges(arr,0,n-1);
    clock_t end = clock();
    printf("Time taken is :%f",(double)(end - start) / CLOCKS_PER_SEC);
    // printf("sorted array is :");
    // for (int i = 0; i <n; i++)
    // {
    //     printf("%d ",arr[i]);
    // }
}