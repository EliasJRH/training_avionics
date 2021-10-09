#ifndef ARRAY_FUNCTIONS
#define ARRAY_FUNCTIONS

int input_arr_len()
{
    int len;
    printf("Input the length of the array: ");
    scanf("%d", &len);
    while(len <= 0)
    {
        printf("Invalid array length!\nInput a non-zero & non-negative array length...\nInput the length of the array: ");
        scanf("%d", &len);
    }
    return len;
}

/* THe Joesh insertionSort Methods*/
void Fill(int *nums, int n)
{
    for(int i = 0; i < n; i++)
    {
        *(nums + i) = n - i;
    }
}

void ShiftRight(int *nums, int pos, int final)
{
    for(int i = final - 1; i >= pos; i--)
    {
        *(nums + i + 1) = *(nums + i);
    }
}

int FindSortedPos(int *nums, int val, int final)
{
    int i;
    for(i = 0; i <= final; i++)
    {
        if(*(nums + i) >= val)
        {
            break;
        }
    }
    return i;
}

void InsertSortedPos(int *nums, int pos, int final)
{
    int v = *(nums + pos);
    int p = FindSortedPos(nums, v, final);
    ShiftRight(nums, p, final);
    *(nums + p) = v;
}

void InsertionSort(int *nums, int size)
{
    for(int i = 1; i < size; i++)
    {
        InsertSortedPos(nums, i, i);
    }
}
/* ENd of THe Joesh insertionSort Methods*/

void store_arr(int *arr, int size)
{
    printf("Storing the array...\n");

    for(int i = 0; i < size; i++)
    {
        printf("\tInput element %d of the array: ", (i /*+ 1*/));
        scanf("%d", (arr + i));
    }
}

void print_arr(int *arr, int size)
{
    printf("Printing the elements of the array...\n");

    for(int i = 0; i < size; i++)
    {
        printf("\tElement %d of the array = %d\n", (i /*+ 1*/), arr[i]);
    }
}

void copy_arr(int *arr, int *copy, int size)
{
    printf("Copying the array...\n");
    for(int i = 0; i < size; i++) copy[i] = arr[i];
}

void reverse_arr(int *arr, int size)
{
    int temp;
    for(int i = 0; i < size/2; i++)
    {
        temp = arr[i];
        arr[i] = arr[size-i-1];
        arr[size-i-1] = temp;
    }
}

void sort_arr(int *arr, int size)
{
    printf("Sorting the elements of the array...\n");
    int temp;
    for(int i = 1; i < size; i++)
    {
        for(int j = 0; j < size-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void duplicate_arr(int *arr, int size)
{
    int count, duplicates = 0;
    for(int i = 0; i < size-1; i++)
    {
        count = 0;
        for(int j = i+1; j < size; j++)
        {
            if (arr[i] == arr[j]) count++;
            else break;
        }
        if(count > 0)
        {
            printf("There were %d occurrences (duplicates) of %d in this array\n", (count+1), arr[i]);
            i += count;
            duplicates++;
        }
    }
    if(!duplicates) printf("There were no duplicates found in this array\n");
}

void unique_arr(int *arr, int size)
{
    int duplicate, unique = 0;
    for(int i = 0; i < size; i++)
    {
        duplicate = 0;
        for(int j = 0; j < size; j++)
        {
            if(i == j);
            else if(arr[i] == arr[j]) duplicate++;
        }
        if(!duplicate)
        {
            printf("%d is a unique element of the array\n", arr[i]);
            unique++;
        }
    }
    if(!unique) printf("There were no unique elements in this array\n");
}

#endif
