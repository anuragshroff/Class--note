/* Q6. Concatenate and compare two strings. */
#include <stdio.h>

int main(void)
{
    char a[100], b[100], c[200];
    int i = 0, j = 0, same = 1;
    printf("Enter first string: ");
    if (fgets(a, sizeof a, stdin) == NULL) return 1;
    printf("Enter second string: ");
    if (fgets(b, sizeof b, stdin) == NULL) return 1;
    while (a[i] != '\0' && a[i] != '\n') i++;
    a[i] = '\0';
    for (i = 0, j = 0; b[j] != '\0' && b[j] != '\n'; j++) b[i++] = b[j];
    b[i] = '\0';

    for (i = 0; a[i] != '\0'; i++) c[i] = a[i];
    for (j = 0; b[j] != '\0'; j++) c[i++] = b[j];
    c[i] = '\0';

    j = 0;
    while (a[j] != '\0' && b[j] != '\0') {
        if (a[j] != b[j]) { same = 0; break; }
        j++;
    }
    if (a[j] != '\0' || b[j] != '\0') same = 0;

    printf("Concatenated = %s\nThe two strings are %s\n", c, same ? "equal" : "not equal");
    return 0;
}
