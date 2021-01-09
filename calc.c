#include <stdio.h>

int main()
{
    char opr;
    double n1, n2;

    printf("\nEnter operator +, -, /, *: ");
    scanf("%c", &opr);

    printf("Enter two numbers: ");
    scanf("%lf, %lf", &n1, &n2);

    switch (opr)
    {
    case '+':
        printf("Sum is: %.1lf\n", n1 + n2);
        break;
    case '-':
        printf("Diff is: %.1lf\n", n1 - n2);
        break;
    case '*':
        printf("Product is: %.1lf\n", n1 * n2);
        break;
    case '/':
        printf("Sum is: %.1lf\n", n1 / n2);
        break;

    default:
        printf("INVALID INPUT!\n");
    }

    return 0;
}