#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int dimension, number, temp;
	int i,j,k,l,x;

    printf("How many elements do you want to have in the array? ");
    scanf("%d", &dimension);

    int arraymerg[dimension * 2];

	for (i = 0; i < dimension; ++i) {
	   printf("Please enter the %dth element of 1st array: ", i);
	   scanf("%d", &number);
	   arraymerg[i] = number;
	}

    for (j = 0 + dimension; j < dimension + dimension; ++j) {
	   printf("Please enter the %dth element of 2nd array: ", j);
	   scanf("%d", &number);
	   arraymerg[j] = number;
	}

    for (x = 0; x < dimension * 2; ++x) {
        for (k = x+1; k < dimension * 2; ++k) {
            if (arraymerg[x]< arraymerg[k]) {
                temp = arraymerg[x];
                arraymerg[x] = arraymerg[k];
                arraymerg[k] = temp;
            }
        }
    }

    for (l = 0; l < dimension * 2; ++l) {
	   printf("%d ",arraymerg[l]);
	}
    printf("\n");

	return 0;
}