#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int compdec (const void * a, const void * b) {
  return ( *(int*)b - *(int*)a );
}

int main(){

    int n1, n2;

    printf("Input the number of elements to be stored in the first array: ");
    scanf("%d", &n1);

    while(getchar() != '\n');

    int nums1[n1];

    printf("Input %d in the first array\n", n1);

    for (int i = 0; i < n1; i++){
        printf("element - %d : " , i);
        scanf("%d", &nums1[i]);
    }


    printf("Input the number of elements to be stored in the second array: ");
    scanf("%d", &n2);

    while(getchar() != '\n');

    int nums2[n2];
    
    printf("Input %d in the second array\n", n1);

    for (int i = 0; i < n2; i++){
        printf("element - %d : " , i);
        scanf("%d", &nums2[i]);
    }

    qsort(nums1, n1, sizeof(n1), compdec);
    qsort(nums2, n2, sizeof(n2), compdec);

    int merged[n1 + n2];

    int p1 = 0;
    int p2 = 0;

    int size1 = sizeof(nums1) / sizeof(nums1[0]);
    int size2 = sizeof(nums2) / sizeof(nums2[0]);

    for (int i = 0; i < n1 + n2; i++){
        if ((nums1[p1] >= nums2[p2] &&  p1 < size1) || p2 >= size2){
            merged[i] = nums1[p1];
            p1++;
        }else if ((nums2[p2] > nums1[p1] && p2 < size2) || p1 >= size1){
            merged[i] = nums2[p2];
            p2++;
        }
    }

    printf("The merged array in descneding order is: \n");

    for (int i = 0; i < n1 + n2; i++){
        printf("%d ", merged[i]);
    }

    printf("\n");

    return 0;
}