/* Q8. Print the pattern up to N lines: A / AC / ACE / ACEG / ACEGI */
#include <stdio.h>

int main(void)
{
    int n, i, j;
    printf("Enter number of lines: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        for (j = 0; j < i; j++)
            printf("%c", 'A' + (2 * j) % 26);
        printf("\n");
    }
    return 0;
}
