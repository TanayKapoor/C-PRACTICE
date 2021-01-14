#include <stdio.h>
int addition(int *a, int *b);

int addition(int *a, int *b)
{
    return *a + *b;
}

int main()
{
    int ans, n1, n2;
    printf("Eneter first number: ");
    scanf("%d", &n1);
    printf("Eneter second number: ");
    scanf("%d", &n2);
    ans = addition(&n1, &n2);
    printf("Sum is: %d\n", ans);

    return 0;
}