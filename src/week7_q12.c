#include <stdio.h>
#include <string.h>

int main(void)
{
    char filename[256];
    char line[1024];
    printf("Output file name: ");
    if (scanf("%255s", filename) != 1) return 1;

    FILE *file = fopen(filename, "w");
    if (file == NULL) {
        perror("Could not open output file");
        return 1;
    }

    int character;
    while ((character = getchar()) != '\n' && character != EOF) { }
    puts("Enter text (finish with a line containing only a dot):");
    while (fgets(line, sizeof line, stdin) != NULL) {
        if (strcmp(line, ".\n") == 0 || strcmp(line, ".") == 0) break;
        if (fputs(line, file) == EOF) {
            perror("Error writing file");
            fclose(file);
            return 1;
        }
    }

    if (fclose(file) != 0) {
        perror("Error closing file");
        return 1;
    }
    printf("Text written to %s.\n", filename);
    return 0;
}
