#include <stdio.h>

int main()
{
    printf("Name:- Tanay Kapoor \n");
    printf("Roll No:- 1955991593 \n");
    printf("Class:- B.Tech It B2 \n");

    printf("Program:- Insertion sort\n");
    int arr[100], n, i, j, x;

    printf("\nEnter number of elements\n");
    scanf("%d", &n);

    printf("Enter %d elements\n", n);

    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    for (i = 1; i < n; i++)
    {
        j = i - 1;
        x = arr[i];
        while (j > -1 && arr[j] > x)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = x;
    }
    printf("Sorted list :\n");

    for (i = 0; i < n; i++)
        printf("%d\n", arr[i]);
    return 0;
}