/* Q1. Read a, b and c as sides of a triangle and print its area. */
#include <math.h>
#include <stdio.h>

int main(void)
{
    float a, b, c, s;
    printf("Enter three sides of a triangle: ");
    scanf("%f %f %f", &a, &b, &c);
    s = (a + b + c) / 2.0f;
    printf("Area = %.2f\n", sqrt(s * (s - a) * (s - b) * (s - c)));
    return 0;
}
