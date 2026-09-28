/* Q8. Encode a word in Pig Latin: find the first vowel, cut the letters before it
   and paste them at the end of the word, then add "ay".
   trouble -> oubletray, paris -> arispay */
#include <stdio.h>

int main(void)
{
    char s[100], out[200];
    int i, n, start = -1, k = 0;
    printf("Enter a word: ");
    if (fgets(s, sizeof s, stdin) == NULL) return 1;
    for (i = 0; s[i] != '\0' && s[i] != '\n'; i++)
        if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] = (char)(s[i] + 32);
    n = i;
    s[n] = '\0';

    for (i = 0; i < n; i++)
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' ||
            s[i] == 'o' || s[i] == 'u') { start = i; break; }

    if (start < 0) { printf("No vowel found, word unchanged: %s\n", s); return 0; }

    for (i = start; i < n; i++) out[k++] = s[i];   /* from the first vowel */
    for (i = 0; i < start; i++) out[k++] = s[i];   /* the cut prefix at the end */
    out[k++] = 'a';
    out[k++] = 'y';
    out[k] = '\0';

    printf("%s -> %s\n", s, out);
    return 0;
}
