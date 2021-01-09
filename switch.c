#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);

    switch (a)
    {
    case 1:
        printf("You entered 1\n");
        break;

    case 2:
        printf("You entered 2\n");
        break;

    default:
        printf("Invalid! Asshole!\n");
    }

    return 0;
}