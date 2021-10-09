#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int dimension, number, currentCheck;
	int i,j,k;
    int duplicates = 0;
    bool checked;

    printf("How many elements do you want to have in the array? ");
    scanf("%d", &dimension);

	int newArray[dimension];

	for (i = 0; i < dimension; ++i) {
	   printf("Please enter the %dth element: ", i);
	   scanf("%d", &number);
	   newArray[i] = number;
	}

    j = 0;
    currentCheck = newArray[j];
    checked = false;

    while ( j < dimension ) {
        for ( k = j + 1; k < dimension; ++k) {
            if ((newArray[k] == currentCheck) && !checkedArray[j]) {
                ++duplicates;
            }
        }
        currentCheck = newArray[j];
        ++j;
    }

	printf("%d\n",duplicates);
	
	return 0;
}