/* Q10. Print the pattern up to N lines: 1 / 121 / 12321 / 1234321 */
#include <stdio.h>

int main(void)
{
    int n, i, j;
    printf("Enter number of lines: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++)
            printf("%d", j % 10);
        for (j = i - 1; j >= 1; j--)
            printf("%d", j % 10);
        printf("\n");
    }
    return 0;
}
