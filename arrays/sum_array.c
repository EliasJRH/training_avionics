#include <stdlib.h>
#include <stdio.h>
#include "array_functions.h"

void sum_arr(int *arr, int size)
{
    store_arr(arr, size);
    int sum = 0;
    for(int i = 0; i < size; i++) sum += arr[i];
    printf("Sum of all the elements of the array = %d\n", sum);
}

int main()
{
    int length = input_arr_len();
    int ex[length];
    sum_arr(ex, length);
}
