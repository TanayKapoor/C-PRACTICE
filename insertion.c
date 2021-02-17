#include <stdio.h>
int main()
{
    int arr[20], n, i, e, loc;
    printf("\nName: Tanay Kapoor \n");
    printf("Roll no: 1955991593\n");

    printf("Number of elements in array: ");
    scanf("%d", &n);
    printf("\nEnter the elements of array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int b;
    printf("Select from given options to perform action\n1. Insert to first position\n2. Insert to last position \n3. Insert to specific postion\n");
    scanf("%d", &b);

    switch (b)
    {
    case 1:
    {
        printf("Enter the element at first position: ");
        scanf("%d", &e);
        for (int i = n; i >= 0; i--)
        {
            arr[i + 1] = arr[i];
        }
        arr[0] = e;
        for (int i = 0; i <= n; i++)
        {
            printf("%d ", arr[i]);
        }
        break;
    }
    case 2:
    {
        printf("Enter the element at last position: ");
        scanf("%d", &e);
        arr[n] = e;
        for (int i = 0; i <= n; i++)
        {
            printf("%d ", arr[i]);
        }
        break;
    }

    case 3:
    {
        printf("Enter the element to be inserted :");
        scanf("%d", &e);
        printf("Enter the location at which the element is to be Inserted");
        scanf("%d", &loc);
        printf("Array before Insertion :");

        for (i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }
        for (i = n; i >= loc; i--)
            arr[i + 1] = arr[i];

        arr[loc] = e;
        printf("\n\n Array after Insertion :");

        for (i = 0; i < n + 1; i++)
            printf("%d ", arr[i]);
    }
    }
    return 0;
}