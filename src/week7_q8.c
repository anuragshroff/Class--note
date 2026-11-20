#include <stdio.h>
#include <string.h>

int main(void)
{
    char text[500];
    printf("Enter a string: ");
    if (fgets(text, sizeof text, stdin) == NULL) return 1;
    text[strcspn(text, "\n")] = '\0';

    char *left = text;
    char *right = text + strlen(text);
    while (left < right) {
        --right;
        if (left >= right) break;
        char temporary = *left;
        *left++ = *right;
        *right = temporary;
    }

    printf("Reversed string: %s\n", text);
    return 0;
}
