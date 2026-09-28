/* Q3. Check whether a user given number is a Perfect Number or not. (28 = 1+2+4+7+14) */
#include <stdio.h>

int main(void)
{
    int n, i, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 1; i < n; i++)
        if (n % i == 0)
            sum += i;

    if (n > 1 && sum == n) printf("%d is a Perfect Number\n", n);
    else                   printf("%d is not a Perfect Number\n", n);
    return 0;
}
