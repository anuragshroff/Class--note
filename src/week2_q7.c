/* Q7. Print the sum and product of the digits of a user given number. */
#include <stdio.h>

int main(void)
{
    int n, d, sum = 0, prod = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n == 0) { printf("Sum = 0\nProduct = 0\n"); return 0; }

    while (n > 0) {
        d = n % 10;
        sum += d;
        prod *= d;
        n /= 10;
    }
    printf("Sum of digits = %d\nProduct of digits = %d\n", sum, prod);
    return 0;
}
