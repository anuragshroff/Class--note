/* Q7. Perform matrix multiplication with two 3 x 3 user defined matrices. */
#include <stdio.h>

int main(void)
{
    int a[3][3], b[3][3], c[3][3] = {{0}}, i, j, k;
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
            for (k = 0; k < 3; k++)
                c[i][j] += a[i][k] * b[k][j];

    printf("Product matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++)
            printf("%d\t", c[i][j]);
        printf("\n");
    }
    return 0;
}
