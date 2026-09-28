/* Q10. Count the frequency of each element of a user defined array of size n. */
#include <stdio.h>

#define MAX 100

int main(void)
{
    int n, a[MAX], seen[MAX] = {0}, i, j, cnt;
    printf("Enter size of array: ");
    scanf("%d", &n);
    if (n < 1 || n > MAX) { printf("Size must be 1..%d\n", MAX); return 1; }

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Frequency of each element:\n");
    for (i = 0; i < n; i++) {
        if (seen[i]) continue;          /* already counted */
        cnt = 0;
        for (j = 0; j < n; j++)
            if (a[j] == a[i]) { cnt++; seen[j] = 1; }
        printf("%d -> %d\n", a[i], cnt);
    }
    return 0;
}
