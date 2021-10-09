#include <stdlib.h>
#include <stdio.h>
#include "array_functions.h"

void reverse_arr_display(int *arr, int size)
{
    store_arr(arr, size);
    
    printf("Reversing the array...\n");
    reverse_arr(arr, size);
    print_arr(arr, size);
}

int main()
{
    int length = input_arr_len();
    int ex[length];
    reverse_arr(ex, length);
}
