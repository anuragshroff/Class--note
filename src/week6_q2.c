/* Q2. Find the length of a user defined string, without using string library functions. */
#include <stdio.h>

int main(void)
{
    char s[100];
    int i = 0;
    printf("Enter a string: ");
    if (fgets(s, sizeof s, stdin) == NULL) return 1;
    while (s[i] != '\0' && s[i] != '\n')
        i++;
    s[i] = '\0';
    printf("Length of \"%s\" = %d\n", s, i);
    return 0;
}
