#include <stdio.h>

int main()
{
    int m;

    printf("Enter month number: ");
    scanf("%d", &m);

    switch (m)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("31 days\n");
        break;

    case 4:
    case 6:
    case 9:
    case 11:
        printf("30 days\n");
        break;

    case 2:
        printf("28/29 days\n");
        break;

    default:
        printf("You don't even know there are 12 months moron!\n");
    }
    return 0;
}