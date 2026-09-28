/* Q7. Input a word and check if it is a palindrome or not. */
#include <stdio.h>

int main(void)
{
    char s[100];
    int i, len, pal = 1;
    printf("Enter a word: ");
    if (fgets(s, sizeof s, stdin) == NULL) return 1;
    for (i = 0; s[i] != '\0' && s[i] != '\n'; i++)
        if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] = (char)(s[i] + 32);
    len = i;
    s[len] = '\0';

    for (i = 0; i < len / 2; i++)
        if (s[i] != s[len - 1 - i]) { pal = 0; break; }

    printf("\"%s\" is %sa palindrome\n", s, pal ? "" : "not ");
    return 0;
}
