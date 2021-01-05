#include <stdio.h>

void main()
{
    int age;

o:
    printf("You are 18+\n");

n:
    printf("You are a bachaa");

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 18)
        goto o;

    else
        goto n;

    getch();
}