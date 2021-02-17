#include <stdio.h>
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
void bubblesort(int arr[], int size)
{
    int i, j;
    for (i = 1; i < size; i++)
    {
        for (j = 0; j < size - i; j++)
        {
            if (arr[j] > arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
        }
    }
}
void selectsort(int arr[], int size)
{
    int i, j;
    for (i = 0; i < size; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                swap(&arr[i], &arr[j]);
            }
        }
    }
}
int main()
{
    int array[100], i, size, opt;
    printf("How many numbers you want to sort:  ");
    scanf("%d", &size);
    printf("\nEnter %d numbers : ", size);
    for (i = 0; i < size; i++)
        scanf("%d", &array[i]);
    printf("Press 1 for bubble sort or 2 for selection sort: ");
    scanf("%d", &opt);
    switch (opt)
    {
    case 1:
        bubblesort(array, size);
        printf("\nSorted array after bubble sort is ");

        for (i = 0; i < size; i++)
            printf(" %d ", array[i]);
        break;

    case 2:
        selectsort(array, size);
        printf("\nSorted array after selecrsort is ");

        for (i = 0; i < size; i++)
            printf(" %d ", array[i]);
        break;

    default:
        printf("choose from 1 or 2.");
    }
    return 0;
}