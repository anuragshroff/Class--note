/* Q11. Print the pattern up to N lines: 1 / 111 / 121 / 1331 / 14641 (Pascal's triangle) */
#include <stdio.h>

int main(void)
{
    int n, i, j, c;
    printf("Enter number of lines: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        c = 1;
        for (j = 0; j <= i; j++) {
            printf("%d", c % 10);
            c = c * (i - j) / (j + 1);
        }
        printf("\n");
    }
    return 0;
}
