/* Q11. Print the even and odd position elements in a 1D array separately,
   and also show their counts. */
#include <stdio.h>

#define MAX 100

int main(void)
{
    int n, a[MAX], i, ec = 0, oc = 0;
    printf("Enter size of array: ");
    scanf("%d", &n);
    if (n < 1 || n > MAX) { printf("Size must be 1..%d\n", MAX); return 1; }

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Elements at even positions: ");
    for (i = 0; i < n; i++)
        if (i % 2 == 0) { printf("%d ", a[i]); ec++; }
    printf("\nCount = %d\n", ec);

    printf("Elements at odd positions: ");
    for (i = 0; i < n; i++)
        if (i % 2 == 1) { printf("%d ", a[i]); oc++; }
    printf("\nCount = %d\n", oc);
    return 0;
}
