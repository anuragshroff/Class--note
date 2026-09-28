/* Q9. Calculate the factorial of an integer. */
#include <stdio.h>

int main(void)
{
    int n, i;
    long long f = 1;
    printf("Enter a non-negative integer: ");
    scanf("%d", &n);
    if (n < 0) { printf("Factorial is not defined for negative numbers\n"); return 1; }

    for (i = 2; i <= n; i++)
        f *= i;
    printf("%d! = %lld\n", n, f);
    return 0;
}
