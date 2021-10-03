#include <stdio.h>


int main(){

    int n;

    printf("Input the number elements to be stored in the array: ");
    scanf("%d", &n);

    int nums[n];

    printf("Input %d number of elements in the array: \n", n);

    for (int i = 0; i < n; i++){
        printf("element - %d: ", i);
        scanf("%d", &nums[i]);
    }

    printf("The values stored into the array are: \n");

    for (int i = 0; i < n; i++){
        printf("%d ", nums[i]);
    }

    printf("\nThe values stored in the array in reverse are: \n");

    for (int i = n - 1; i > -1; i--){
        printf("%d ", nums[i]);
    }

    printf("\n");

    return 0;
}