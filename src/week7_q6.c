#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    size_t rows, columns;
    printf("Enter row and column counts: ");
    if (scanf("%zu %zu", &rows, &columns) != 2 || rows == 0 || columns == 0 ||
        rows > 1000 || columns > 1000 || rows > (size_t)-1 / columns ||
        rows * columns > (size_t)-1 / sizeof(int)) {
        fprintf(stderr, "Invalid dimensions.\n");
        return 1;
    }

    int *matrix = malloc(rows * columns * sizeof *matrix);
    if (matrix == NULL) {
        perror("Could not allocate matrix");
        return 1;
    }

    printf("Enter %zu integer values:\n", rows * columns);
    for (size_t i = 0; i < rows * columns; ++i) {
        if (scanf("%d", matrix + i) != 1) {
            fprintf(stderr, "Invalid matrix value.\n");
            free(matrix);
            return 1;
        }
    }

    puts("Matrix:");
    for (size_t row = 0; row < rows; ++row) {
        for (size_t column = 0; column < columns; ++column)
            printf("%d\t", *(matrix + row * columns + column));
        putchar('\n');
    }
    free(matrix);
    return 0;
}
