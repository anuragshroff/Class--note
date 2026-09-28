/* Q1. Print the Fibonacci series for a user given range (0, 1, 1, 2, 3, 5, 8, ... n terms). */
#include <stdio.h>

int main(void)
{
    int n, i, a = 0, b = 1, c;
    printf("Enter number of terms: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
    printf("\n");
    return 0;
}
