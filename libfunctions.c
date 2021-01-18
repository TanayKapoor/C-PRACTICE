#include <stdio.h>
#include <math.h>

int main()
{
    int i = -10, e = 2, d = 10;
    float rad = 1.43;
    double d1 = 3.0, d2 = 4.0;

    // printf("%d\n", abs(i));
    printf("%f\n", sin(rad));
    printf("%f\n", cos(rad));
    printf("%f\n", exp(e));
    // printf("%d\n", log(d));
    printf("%f\n", pow(d1, d2));

    return 0;
}