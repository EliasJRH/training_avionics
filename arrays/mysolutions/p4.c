#include <stdio.h>

int main(void)
{
    int dimension;
	int i;
    int number;
    int temp;

    printf("How many elements do you want to have in the array? ");
    scanf("%d", &dimension);

	int origArray[dimension];
    int newArray[dimension];

	for (i = 0; i < dimension; ++i) {
	   printf("Please enter the %dth element: ", i);
	   scanf("%d", &number);
       origArray[i] = number;
	   newArray[i] = number;
	}

    printf("Elements in first array:\n");
    for (i = 0; i < dimension; ++i) {
        printf("%d ",origArray[i]);
    }
    printf("\n");
    
    printf("Elements in second array:\n");
    for (i = 0; i < dimension; ++i) {
	   printf("%d ",newArray[i]);
	}
	printf("\n");
	
	return 0;
}