/* Q2. Declare, read and display values in a 2-D array of size m x n. */
#include <stdio.h>

#define MAX 100

int main(void)
{
    int m, n, a[MAX][MAX], i, j;
    printf("Enter rows and columns: ");
    scanf("%d %d", &m, &n);
    if (m < 1 || m > MAX || n < 1 || n > MAX) { printf("Invalid size\n"); return 1; }

    printf("Enter %d x %d elements: ", m, n);
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    printf("2-D array:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++)
            printf("%d\t", a[i][j]);
        printf("\n");
    }
    return 0;
}
