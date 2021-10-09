#include <stdio.h>
#include <stdlib.h>
#include "array_functions.h"

int main()
{
    int A[100];
    Fill(A, 100);
    InsertionSort(A, 100);

    for(int i = 0; i < 100; i++)
    {
        printf("%d ", A[i]);
        if(!((i+1)%10))
        {
            printf("\n");
        }
    }

    return 0;
}
