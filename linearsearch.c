#include <stdio.h>

int main()
{
    int array[100], search, c, n, i = 0;
    printf("Enter number of elements in array: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for (c = 0; c < n; c++)
        scanf("%d", &array[c]);
    printf("Enter number to search: ");
    scanf("%d", &search);
    for (int c = 0; c < n; c++)
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

    return 0;
}