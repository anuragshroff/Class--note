/* Q9. Merge two user defined arrays. */
#include <stdio.h>

#define MAX 100

int main(void)
{
    int n1, n2, a[MAX], b[MAX], m[MAX], i;
    printf("Enter size of first array: ");
    scanf("%d", &n1);
    if (n1 < 1 || n1 > MAX) { printf("Size must be 1..%d\n", MAX); return 1; }

    printf("Enter %d elements: ", n1);
    for (i = 0; i < n1; i++)
        scanf("%d", &a[i]);

    printf("Enter size of second array: ");
    scanf("%d", &n2);
    if (n2 < 1 || n2 > MAX - n1) { printf("Merged size must stay within %d\n", MAX); return 1; }

    printf("Enter %d elements: ", n2);
    for (i = 0; i < n2; i++)
        scanf("%d", &b[i]);

    for (i = 0; i < n1; i++)
        m[i] = a[i];
    for (i = 0; i < n2; i++)
        m[n1 + i] = b[i];

    printf("Merged array (%d elements): ", n1 + n2);
    for (i = 0; i < n1 + n2; i++)
        printf("%d ", m[i]);
    printf("\n");
    return 0;
}
