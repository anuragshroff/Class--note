/* Q6. Print the pattern up to N lines: A / BB / CCC / DDDD. */
#include <stdio.h>

int main(void)
{
    int n, i, j;
    printf("Enter number of lines: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++)
            printf("%c", 'A' + (i - 1) % 26);
        printf("\n");
    }
    return 0;
}
