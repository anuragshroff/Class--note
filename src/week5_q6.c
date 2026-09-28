/* Q6. Perform matrix addition with two 3 x 3 user defined matrices. */
#include <stdio.h>

int main(void)
{
    int a[3][3], b[3][3], c[3][3], i, j;
    printf("Enter 3x3 matrix A: ");
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            scanf("%d", &a[i][j]);

    printf("Enter 3x3 matrix B: ");
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            scanf("%d", &b[i][j]);

    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            c[i][j] = a[i][j] + b[i][j];

    printf("Sum matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++)
            printf("%d\t", c[i][j]);
        printf("\n");
    }
    return 0;
}
