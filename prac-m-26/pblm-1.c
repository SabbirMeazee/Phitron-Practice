#include <stdio.h>
int main()
{
    float a, b;
    scanf("%f %f", &a, &b);
    float *p = &a, *q = &b;
    float avg = (*p + *q) / 2;
    printf("%.3f", avg);
    return 0;
}