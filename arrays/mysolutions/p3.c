#include <stdio.h>

int main(void)
{
    int dimension;
	int i,j;
    int number;
    int sum;

    printf("How many elements do you want to have in the array? ");
    scanf("%d", &dimension);

	int newArray[dimension];

	for (i = 0; i < dimension; ++i) {
	   printf("Please enter the %dth element: ", i);
	   scanf("%d", &number);
	   newArray[i] = number;
	}

    for (j=0;j < dimension; ++j) {
        sum += newArray[j];
    }

	printf("%d\n",sum);
	
	return 0;
}