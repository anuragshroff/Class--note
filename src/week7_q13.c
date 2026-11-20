#include <stdio.h>

int main(void)
{
    char source_name[256], destination_name[256];
    printf("Source file: ");
    if (scanf("%255s", source_name) != 1) return 1;
    printf("Destination file: ");
    if (scanf("%255s", destination_name) != 1) return 1;

    FILE *source = fopen(source_name, "rb");
    if (source == NULL) {
        perror("Could not open source file");
        return 1;
    }
    FILE *destination = fopen(destination_name, "wb");
    if (destination == NULL) {
        perror("Could not open destination file");
        fclose(source);
        return 1;
    }

    int character;
    int failed = 0;
    while ((character = fgetc(source)) != EOF) {
        if (fputc(character, destination) == EOF) {
            failed = 1;
            break;
        }
    }
    if (ferror(source)) failed = 1;
    if (fclose(source) != 0) failed = 1;
    if (fclose(destination) != 0) failed = 1;

    if (failed) {
        fprintf(stderr, "An error occurred while copying the file.\n");
        return 1;
    }
    printf("Copied %s to %s.\n", source_name, destination_name);
    return 0;
}
