#include <stdio.h>

int main(void)
{
    int dimension;
	int i;
    int number;
    int temp;

    printf("How many elements do you want to have in the array? ");
    scanf("%d", &dimension);

	int newArray[dimension];

	for (i = 0; i < dimension; ++i) {
	   printf("Please enter the %dth element: ", i);
	   scanf("%d", &number);
	   newArray[i] = number;
	}

    for (i=0;i < dimension / 2; ++i) {
        temp = newArray[i];
        newArray[i] = newArray[dimension - 1 - i];
        newArray[dimension - 1 - i] = temp;
    }

    for (i = 0; i < dimension; ++i) {
	   printf("%d ",newArray[i]);
	}
	printf("\n");
	
	return 0;
}