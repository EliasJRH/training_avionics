#include <stdio.h>
#include <stdbool.h>

// found this question a bit tough, tried my best though
/* for example when testing in edge cases like 1 0 1 0 1, for some reason 
    I kept getting the num of duplicated to be 4 rather than 3. idk tho
*/

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
            if ((newArray[k] == currentCheck) && !checked) {
                ++duplicates;
            }
        }
        ++j;
        currentCheck = newArray[j];

    }

	printf("%d\n",duplicates);
	
	return 0;
}