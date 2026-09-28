/* Q1. Print the pattern up to N lines: four stars on every line. */
#include <stdio.h>

int main(void)
{
    int n, i, j;
    printf("Enter number of lines: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= 4; j++)
            printf("*");
        printf("\n");
    }
    return 0;
}
