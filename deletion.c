#include <stdio.h>

int main()
{
    int n;
    printf("Enter the size of array : ");
    scanf("%d", &n);
    int a[100];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int b;
    printf("Select option for performing action:\n1. Delete first element\n2. Delete last element.\n3. Delete specific element.\n");
    scanf("%d", &b);
    switch (b)
    {
    case 1:
    {
        for (int i = 1; i < n; i++)
        {
            a[i - 1] = a[i];
        }
        printf("After deletion of 1st element : ");
        for (int i = 0; i < n - 1; i++)
        {
            printf("%d ", a[i]);
        }
        break;
    }
    case 2:
    {
        for (int i = n; i > 0; i--)
        {
            a[i] = a[i - 1];
        }
        printf("After deletion of last element : ");

        for (int i = 1; i < n; i++)
        {
            printf("%d ", a[i]);
        }
        break;
    }
    case 3:
    {
        int pos;
        printf("Enter the position : ");
        scanf("%d", &pos);

        for (int i = pos - 1; i < n - 1; i++)
        {
            a[i] = a[i + 1];
        }
        for (int i = 0; i < n - 1; i++)
        {
            printf("%d ", a[i]);
        }
        break;
    }
    }
    return 0;
}