/* Q4. Generate all Palindrome numbers within a given range. */
#include <stdio.h>

int main(void)
{
    int lo, hi, i, n, rev, d;
    printf("Enter the range: ");
    scanf("%d %d", &lo, &hi);

    for (i = lo; i <= hi; i++) {
        n = i;
        rev = 0;
        while (n > 0) {
            d = n % 10;
            rev = rev * 10 + d;
            n /= 10;
        }
        if (i > 0 && i == rev)
            printf("%d ", i);
    }
    printf("\n");
    return 0;
}
