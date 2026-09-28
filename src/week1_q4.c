/* Q4. Find the last digit of a number without using modulus (%) operator. */
#include <stdio.h>

int main(void)
{
    int n, t;
    printf("Enter a number: ");
    scanf("%d", &n);
    t = n;
    while (t >= 10)          /* strip the tens by repeated subtraction */
        t = t - 10;
    printf("Last digit = %d\n", t);
    return 0;
}
