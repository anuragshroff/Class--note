/* Q9. Swap two numbers using and without using a third variable. */
#include <stdio.h>

int main(void)
{
    int a, b, t;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Originally: a = %d, b = %d\n", a, b);

    a = a + b;      /* a holds the sum */
    b = a - b;      /* b recovers original a */
    a = a - b;      /* a recovers original b */
    printf("Without third variable: a = %d, b = %d\n", a, b);

    t = a; a = b; b = t;
    printf("With third variable:    a = %d, b = %d\n", a, b);
    return 0;
}
