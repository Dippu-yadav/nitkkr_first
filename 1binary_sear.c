#include <stdio.h>
int binarysearch(int arr[], int high, int low, int element)
{
    if (low > high)
        return -1;

    int mid = (low + high) / 2;
    if (element == arr[mid])
        return mid;
    else if (element < arr[mid])
    {
        return binarysearch(arr, mid - 1, 0, element);
    }
    else
        return binarysearch(arr, high, mid + 1, element);
}
int main()
{
    int arr[] = {1, 3, 5, 8, 9, 12, 14, 16, 18, 22, 44, 66, 77, 88, 99};
    int size = sizeof(arr) / sizeof(int);
    int element = 66;
    int index = binarysearch(arr, size - 1, 0, element);
    printf("%d",index);
}
