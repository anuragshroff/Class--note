#include <stdio.h>

int main(void)
{
    char filename[256], subject[100];
    size_t count;
    printf("Marks file (each line: subject marks): ");
    if (scanf("%255s", filename) != 1) return 1;

    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        perror("Could not open file");
        return 1;
    }

    double marks, total = 0.0;
    count = 0;
    while (fscanf(file, "%99s %lf", subject, &marks) == 2) {
        printf("%s: %.2f\n", subject, marks);
        total += marks;
        ++count;
    }
    if (ferror(file)) {
        perror("Error reading file");
        fclose(file);
        return 1;
    }
    fclose(file);

    if (count == 0) {
        fprintf(stderr, "No subject/marks records found.\n");
        return 1;
    }
    printf("Average marks: %.2f\n", total / count);
    return 0;
}
