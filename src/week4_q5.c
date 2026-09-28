/* Q5. Print the pattern up to N lines: inverted pyramid of stars. */
#include <stdio.h>

int main(void)
{
    int n, i, j;
    printf("Enter number of lines: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++)
            printf(" ");
        for (j = 1; j <= 2 * (n - i) + 1; j++)
            printf("*");
        printf("\n");
    }
    return 0;
}
