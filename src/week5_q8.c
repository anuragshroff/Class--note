/* Q8. Split an array from a user defined position. */
#include <stdio.h>

#define MAX 100

int main(void)
{
    int n, a[MAX], p, i;
    printf("Enter size of array: ");
    scanf("%d", &n);
    if (n < 1 || n > MAX) { printf("Size must be 1..%d\n", MAX); return 1; }

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Split at position: ");
    scanf("%d", &p);
    if (p < 0 || p > n) { printf("Invalid position\n"); return 1; }

    printf("Part 1: ");
    for (i = 0; i < p; i++)
        printf("%d ", a[i]);
    printf("\nPart 2: ");
    for (i = p; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
    return 0;
}
