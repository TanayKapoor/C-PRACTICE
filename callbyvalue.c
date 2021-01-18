#include <stdio.h>
int addition(int a, int b);

int main()
{
    int ans, num1, num2;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    ans = addition(num1, num2);
    printf("Sum is :%d\n", ans);

    return 0;
}

int addition(int a, int b)
{
    return (a + b);
}