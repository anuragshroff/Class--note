/* Q4. Find the largest and smallest element in a user defined array of size n. */
#include <stdio.h>

#define MAX 100

int main(void)
{
    int n, a[MAX], i, max, min;
    printf("Enter size of array: ");
    scanf("%d", &n);
    if (n < 1 || n > MAX) { printf("Size must be 1..%d\n", MAX); return 1; }

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    max = min = a[0];
    for (i = 1; i < n; i++) {
        if (a[i] > max) max = a[i];
        if (a[i] < min) min = a[i];
    }
    printf("Largest = %d\nSmallest = %d\n", max, min);
    return 0;
}
