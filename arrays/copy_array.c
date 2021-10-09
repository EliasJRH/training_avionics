#include <stdlib.h>
#include <stdio.h>
#include "array_functions.h"

void copy_and_display_arr(int *arr, int *copy, int size)
{
    store_arr(arr, size);
    copy_arr(arr, copy, size);
    printf("Original Array:\n");
    print_arr(arr, size);
    printf("Copied Array:\n");
    print_arr(copy, size);
}

int main()
{
    int length = input_arr_len();
    int ex[length], copy[length];
    copy_and_display_arr(ex, copy, length);
}
