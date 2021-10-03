#include <stdio.h>
#include <stdbool.h>

int main(){

    int n;
    int entries = 0;
    int duplicates = 0;
    bool dupeFound = false;

    printf("Input the number elements to be stored in the array: ");
    scanf("%d", &n);

    int nums[n];


    printf("Input %d number of elements in the array: \n", n);

    for (int i = 0; i < n; i++){
        printf("element - %d: ", i);

        //If the first element is being entered put into array
        if (entries == 0){
            scanf("%d", &nums[0]);
            entries++;

        //Otherwise before entering, check if it's already in the array
        }else{
            int entry;
            scanf("%d", &entry);

            //Chceking for duplicates
            for (int j = 0; j < entries; j++){
                //If it is, mark as a duplicate
                if (entry == nums[j]){
                    dupeFound = true;
                    duplicates++;
                    break;
                }
            }

            //If a duplicate wasn't found enter into array
            if (!dupeFound){ 
                nums[entries] = entry;
                entries++; 
            }

            //Reset dupe flag to false
            dupeFound = false;

        }
    }

    printf("Total number of duplicate elements found in the array is: %d\n", duplicates);

    return 0;
}