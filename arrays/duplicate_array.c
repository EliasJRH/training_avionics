#include <stdlib.h>
#include <stdio.h>
#include "array_functions.h"

/*
 There's a crucial assumption made in this solution.
 
 We have assumed that the array would only contain values
 between [0, n-1]. For example, an array of size 5 would
 only contain elements/values of 0, 1, 2, 3, and 4.
 
 With this assumption, the function let's us know how many
 times each element is repeated.
 
 The final result is stored in another array called
 "duplicates" which is mapped with the index. Meaning that
 element 0 of the array holds the number of times 0 has
 occurred in our input array, and so on.
 */

void duplicate_arr_elements(int *arr, int size)
{
    int duplicates[size], count = 0;
    
    printf("This array can only hold values of (size - 1)\nIf your array size was 5\nThe highest value any element of this array can store is (5-1) = 4\n");
    for(int i = 0; i < size; i++)
    {
        printf("\tInput element %d of the array: ", (i /*+ 1*/));
        scanf("%d", (arr + i));
        while(arr[i] >= size)
        {
            printf("Invalid entry, try again\n\tInput element %d of the array: ", (i /*+ 1*/));
            scanf("%d", (arr + i));
        }
    }
    
    for(int i = 0; i < size; i++)
    {
        //Make a mapping within our array
        arr[arr[i] % size] += size;
    }
    for(int i = 0; i < size; i++)
    {
        //Logic to check for number of duplicates
        duplicates[i] = arr[i]/size;
    }
    for(int i = 0; i < size; i++)
    {
        //Recovering the original array by reversing the mapping
        arr[i] = arr[i] % size;
    }
    
    for(int i = 0; i < size; i++)
    {
        if(duplicates[i] > 1)
        {
            printf("\tThere are %d occurrences (duplicates) of %d in this array\n", duplicates[i], i);
            count++;
        }
    }
    if(!count) printf("There are NO duplicates in this array\n");
    print_arr(duplicates, size);
}

int main()
{
    int length = input_arr_len();
    int ex[length];
    duplicate_arr_elements(ex, length);
}
