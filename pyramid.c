#include <stdio.h>

int main()
{
    int n, temp;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    temp = n;

    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j < temp; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            printf("*");
        }
        temp++;
        printf("\n");
    }

    return 0;
}