/* Q3. Copy one string to another string. */
#include <stdio.h>

int main(void)
{
    char s[100], d[100];
    int i = 0;
    printf("Enter a string: ");
    if (fgets(s, sizeof s, stdin) == NULL) return 1;
    while (s[i] != '\0' && s[i] != '\n') { d[i] = s[i]; i++; }
    d[i] = '\0';
    printf("Copied string = %s\n", d);
    return 0;
}
