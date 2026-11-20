#include <stdio.h>

int main(void)
{
    char filename[256];
    printf("Text file to read: ");
    if (scanf("%255s", filename) != 1) return 1;

    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        perror("Could not open file");
        return 1;
    }

    int character;
    while ((character = fgetc(file)) != EOF) putchar(character);
    if (ferror(file)) {
        perror("Error reading file");
        fclose(file);
        return 1;
    }
    fclose(file);
    return 0;
}
