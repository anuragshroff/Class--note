/* Q8. Reverse the digits of an integer. */
#include <stdio.h>

int main(void)
{
    int n, rev = 0, d;
    printf("Enter an integer: ");
    scanf("%d", &n);
    if (n < 0) { printf("Input must be non-negative\n"); return 1; }

    while (n > 0) {
        d = n % 10;
        rev = rev * 10 + d;
        n /= 10;
    }
    printf("Reversed number = %d\n", rev);
    return 0;
}
