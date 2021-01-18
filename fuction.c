#include <stdio.h>
int addition();

int main()
{
    int ans;
    ans = addition();
    printf("sum is %d\n", ans);
    return 0;
}

int addition()
{
    int num1 = 69, num2 = 10;
    int sum = num1 + num2;
    return sum;
}