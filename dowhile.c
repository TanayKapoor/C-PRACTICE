#include <stdio.h>

int main()
{
    int n = 1, times = 5;
    do
    {
        printf("Do while: %d\n", n);
        n++;
    } while (n <= times);

    return 0;
}