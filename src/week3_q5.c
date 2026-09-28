/* Q5. Check if a user given number is a Krishnamurthy number or not.
   e.g. 40585 = 4! + 0! + 5! + 8! + 5! */
#include <stdio.h>

int main(void)
{
    int n, tmp, d, i, sum = 0, fact;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n <= 0) { printf("Not a Krishnamurthy number\n"); return 0; }

    tmp = n;
    while (tmp > 0) {
        d = tmp % 10;
        fact = 1;
        for (i = 1; i <= d; i++)
            fact *= i;
        sum += fact;
        tmp /= 10;
    }
    if (sum == n) printf("%d is a Krishnamurthy number\n", n);
    else          printf("%d is not a Krishnamurthy number\n", n);
    return 0;
}
