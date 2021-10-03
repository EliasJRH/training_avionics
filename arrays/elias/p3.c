#include <stdio.h>

int main(){

    int n, total;

    printf("Input the number elements to be stored in the array: ");
    scanf("%d", &n);

    int nums[n];

    printf("Input %d number of elements in the array: \n", n);

    for (int i = 0; i < n; i++){
        printf("element - %d: ", i);
        scanf("%d", &nums[i]);
    }

    for (int i = 0; i < n; i++){
        total += nums[i];
    }

    printf("Sum of all the elements stored in the array is: %d\n", total);

    return 0;
}