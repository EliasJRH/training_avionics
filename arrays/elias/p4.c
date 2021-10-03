#include <stdio.h>

int main(){

    int n;

    printf("Input the number elements to be stored in the array: ");
    scanf("%d", &n);

    int nums[n];
    int nums2[n];

    printf("Input %d number of elements in the array: \n", n);

    for (int i = 0; i < n; i++){
        printf("element - %d: ", i);
        scanf("%d", &nums[i]);
    }

    for (int i = 0; i < n; i++){
        nums2[i] = nums[i];
    }

    printf("The elements stored in the first array are: ");

    for (int i = 0; i < n; i++){
        printf("%d ", nums[i]);
    }

    printf("\n");

    printf("The elements stored in the second array are: ");

    for (int i = 0; i < n; i++){
        printf("%d ", nums2[i]);
    }
    
    printf("\n");

    return 0;
}