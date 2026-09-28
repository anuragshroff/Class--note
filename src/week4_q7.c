/* Q7. Print the pattern up to N lines: ABCDE / CDEF / EFG / GH / I */
#include <stdio.h>

int main(void)
{
    int n, i, j;
    printf("Enter number of lines: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        for (j = 0; j < n - i; j++)
            printf("%c", 'A' + (2 * i + j) % 26);
        printf("\n");
    }
    return 0;
}
