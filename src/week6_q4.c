/* Q4. Accept and reverse a string, without using string library functions. */
#include <stdio.h>

int main(void)
{
    char s[100], r[100];
    int i = 0, j;
    printf("Enter a string: ");
    if (fgets(s, sizeof s, stdin) == NULL) return 1;
    while (s[i] != '\0' && s[i] != '\n')
        i++;
    s[i] = '\0';
    for (j = 0; j < i; j++)
        r[j] = s[i - 1 - j];
    r[i] = '\0';
    printf("Reversed string = %s\n", r);
    return 0;
}
