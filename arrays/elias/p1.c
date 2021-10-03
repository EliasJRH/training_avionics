#include <stdio.h>

int main(){

    int n;

    printf("How many elements would you like to store: ");

    scanf("%d", &n);

    int nums[n];

    printf("Input %d elements in the array :\n", n);

    for (char i = 0; i < n; i++){
        printf("element - %d: ", i + 1);
        scanf("%d", &nums[i]);
    }

    printf("Elements in array are: ");

    for (char i = 0; i < n; i++){
        printf("%d ", nums[i]);
    }

    printf("\n");

    return 0;
}