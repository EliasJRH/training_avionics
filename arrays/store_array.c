#include <stdlib.h>
#include <stdio.h>
#include "array_functions.h"

void store_print_arr(int *arr, int size)
{
    store_arr(arr, size);
    print_arr(arr, size);
}

int main()
{
    int length = input_arr_len();
    int ex[length];
    store_print_arr(ex, length);
}
