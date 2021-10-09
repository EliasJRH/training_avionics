#include <stdlib.h>
#include <stdio.h>
#include "array_functions.h"

void unique_arr_elements(int *arr, int size)
{
    store_arr(arr, size);
    int copy[size];
    copy_arr(arr, copy, size);
    sort_arr(copy, size);
    unique_arr(copy, size);
}

int main()
{
    int length = input_arr_len();
    int ex[length];
    unique_arr_elements(ex, length);
}
