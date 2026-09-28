/* Q2. Print the pattern up to N lines: 1, 2, 3, ... N stars. */
#include <stdio.h>

int main(void)
{
    int n, i, j;
    printf("Enter number of lines: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++)
            printf("*");
        printf("\n");
    }
    return 0;
}
