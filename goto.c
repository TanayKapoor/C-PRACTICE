#include <stdio.h>

int main()
{
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 18)
    {
        goto o;
    }
    else
    {
        goto n;
    }

o:
    printf("You are 18+\n");

n:
    printf("You are a bachaa\n");
}