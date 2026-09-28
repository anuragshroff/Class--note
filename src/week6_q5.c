/* Q5. Find the vowels in a user input string and count them. */
#include <stdio.h>

int main(void)
{
    char s[100];
    int i, v = 0, c = 0;
    printf("Enter a string: ");
    if (fgets(s, sizeof s, stdin) == NULL) return 1;

    printf("Vowels found: ");
    for (i = 0; s[i] != '\0' && s[i] != '\n'; i++) {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' ||
            s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U') {
            printf("%c ", s[i]);
            v++;
        } else if (s[i] != ' ') {
            c++;
        }
    }
    printf("\nVowel count = %d\nConsonant count = %d\n", v, c);
    return 0;
}
