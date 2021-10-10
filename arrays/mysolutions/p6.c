#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int dimension, number;
	int i,j,k;
    int duplicates = 0;

    printf("How many elements do you want to have in the array? ");
    scanf("%d", &dimension);

	int newArray[dimension];

	for (i = 0; i < dimension; ++i) {
	   printf("Please enter the %dth element: ", i);
	   scanf("%d", &number);
	   newArray[i] = number;
	}

    printf("Unique elements are:\n");

    for ( j = 0; j < dimension; ++j) {
        for ( k = 0; k < dimension; ++k) {
            if ((newArray[j] == newArray[k]) && (j != k)) {
                ++duplicates;
            }
        }
        if (duplicates == 0) {
            printf("%d ", newArray[j]);
        }

    }
	
    printf("\n");

	return 0;
}