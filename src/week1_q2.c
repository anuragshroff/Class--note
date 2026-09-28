/* Q2. Find the summation and difference of two floating variables. */
#include <stdio.h>

int main(void)
{
    float a, b;
    printf("Enter two floating point numbers: ");
    scanf("%f %f", &a, &b);
    printf("Sum = %.2f\nDifference = %.2f\n", a + b, a - b);
    return 0;
}
