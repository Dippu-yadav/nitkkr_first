#include <stdio.h>

void checkDuplicates(int A[], int n)
{
    int i, j;

    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (A[j] > A[j + 1])
            {
                int temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }
    for (i = 0; i < n - 1; i++)
    {
        if (A[i] == A[i + 1])
        {
            printf("Duplicate found: %d\n", A[i]);
            return;
        }
    }

    printf("No duplicates found.\n");
}

int main()
{
    int A[] = {3, 1, 4, 5, 2, 3};
    int n = sizeof(A) / sizeof(A[0]);
    checkDuplicates(A, n);
    return 0;
}
