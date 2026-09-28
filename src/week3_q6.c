/* Q6. Check if a user given number is a Disarium number or not.
   e.g. 135 = 1^1 + 3^2 + 5^3 */
#include <stdio.h>

int main(void)
{
    int n, tmp, d, i, cnt = 0, sum = 0, p;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n <= 0) { printf("Not a Disarium number\n"); return 0; }

    for (tmp = n; tmp > 0; tmp /= 10)
        cnt++;

    tmp = n;
    while (tmp > 0) {
        d = tmp % 10;
        p = 1;
        for (i = 0; i < cnt; i++)
            p *= d;
        sum += p;
        cnt--;
        tmp /= 10;
    }
    if (sum == n) printf("%d is a Disarium number\n", n);
    else          printf("%d is not a Disarium number\n", n);
    return 0;
}
