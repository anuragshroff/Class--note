/* Q3. Copy the elements of one array into another array. */
#include <stdio.h>

#define MAX 100

int main(void)
{
    int n, a[MAX], b[MAX], i;
    printf("Enter size of array: ");
    scanf("%d", &n);
    if (n < 1 || n > MAX) { printf("Size must be 1..%d\n", MAX); return 1; }

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < n; i++)
        b[i] = a[i];

    printf("Copied array: ");
    for (i = 0; i < n; i++)
        printf("%d ", b[i]);
    printf("\n");
    return 0;
}
