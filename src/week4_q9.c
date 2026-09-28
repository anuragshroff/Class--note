/* Q9. Print the pattern up to N lines: 10001 / 01010 / 00100 / 01010 / 10001 */
#include <stdio.h>

int main(void)
{
    int n, i, j;
    printf("Enter number of lines: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++)
            printf("%d", (i == j || i + j == n - 1) ? 1 : 0);
        printf("\n");
    }
    return 0;
}
