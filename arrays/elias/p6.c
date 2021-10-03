#include <stdio.h>
#include <stdbool.h>

int main(){

    int n;
    int uniques = 0;
    bool uniqueFound = true;

    printf("Input the number of elements to be stored in the array: ");
    scanf("%d", &n);

    int nums[n];
    int uniqueNums[n];

    for (int i = 0; i < n; i++){
        printf("element - %d : ", i);
        scanf("%d", &nums[i]);
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (nums[i] == nums[j] && i != j){
                uniqueFound = false;
                break;
            }
        }
        if (uniqueFound){
            uniqueNums[uniques] = nums[i];
            uniques++;
        }
        uniqueFound = true;

    }

    if (uniques == 0){
        printf("There are no unique numbers in the array\n");
        return 0;
    }

    printf("The unique elements found in the array are: \n");

    for (int i = 0; i < uniques; i++){
        printf("%d ", uniqueNums[i]);
    }

    printf("\n");

    return 0;
}