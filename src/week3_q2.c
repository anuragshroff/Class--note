/* Q2. Find all Prime numbers within a given range (Limit: 50-70 -> 53, 59, 61, 67). */
#include <stdio.h>

int main(void)
{
    int lo, hi, i, j, prime;
    printf("Enter the range: ");
    scanf("%d %d", &lo, &hi);

    for (i = lo; i <= hi; i++) {
        prime = 1;
        for (j = 2; j * j <= i; j++)
            if (i % j == 0) { prime = 0; break; }
        if (i > 1 && prime)
            printf("%d ", i);
    }
    printf("\n");
    return 0;
}
