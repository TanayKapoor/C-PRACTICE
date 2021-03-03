#include <stdio.h>

int main()
{
    int array[100], search, c, n, i = 0, opt, low, high, mid;
    printf("Enter number of elements in array: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for (c = 0; c < n; c++)
        scanf("%d", &array[c]);
    printf("Enter number to search: ");
    scanf("%d", &search);
    printf("Enter 1 for linear search or 2 for binary search: ");
    scanf("%d", &opt);
    switch (opt)
    {
    case 1:
        for (int c = 0; c < n; c++)˛
        {
            if (array[c] == search)
            {
                printf("%d is present at location %d\n", search, c + 1);
                i++;
            }
        }
        if (i == 0)
            printf("%d is not present in array\n", search);
        else
            printf("%d is present %d times in array\n", search, i);
        break;

    case 2:
        low = 0;
        high = n - 1;
        mid = (low + high) / 2;
        while (low <= high)
        {
            if (array[mid] == search)
            {
                printf("%d is found at location %d\n", search, mid + 1);
                break;
            }
            else
            {
                high = mid - 1;
                mid = (low + high) / 2;
            }
            if (low > high)
            {
                printf("%d is not present in array", search);
            }
        }
        break;

    default:
        printf("choose either from 1 or 2");
        break;
    }

    return 0;
}