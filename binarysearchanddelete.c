#include <stdio.h>

int main()
{
    int search, c, n, i = 0, st, en, mid;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    int array[n];
    printf("Enter elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("Enter number to search: ");
    scanf("%d", &search);

    st = 0;
    en = n - 1;
    mid = (st + en) / 2;
    while (st <= en)
    {
        if (array[mid] == search)
        {
            printf("%d is found at location %d\nAfter Deletion:\n", search, mid + 1);
            for (int i = mid; i < n - 1; i++)
            {
                array[i] = array[i + 1];
            }
            for (int i = 0; i < n - 1; i++)
            {
                printf("%d ", array[i]);
            }
            break;
        }

        else
        {
            en = mid - 1;
            mid = (st + en) / 2;
        }
    }
    if (st > en)
        printf("Not found! %d isn't present in the list.\n", search);
    return 0;
}