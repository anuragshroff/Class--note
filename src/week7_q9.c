#include <stdio.h>
#include <stdlib.h>

static int *read_array(size_t count)
{
    int *array = malloc(count * sizeof *array);
    if (array == NULL) return NULL;

    for (size_t i = 0; i < count; ++i) {
        if (scanf("%d", array + i) != 1) {
            free(array);
            return NULL;
        }
    }
    return array;
}

int main(void)
{
    size_t count;
    printf("Array size (1-100000): ");
    if (scanf("%zu", &count) != 1 || count == 0 || count > 100000) {
        fprintf(stderr, "Invalid array size.\n");
        return 1;
    }

    printf("Enter %zu integers: ", count);
    int *values = read_array(count);
    if (values == NULL) {
        fprintf(stderr, "Could not read or allocate the array.\n");
        return 1;
    }

    int smallest = *values;
    int largest = *values;
    for (size_t i = 1; i < count; ++i) {
        if (*(values + i) < smallest) smallest = *(values + i);
        if (*(values + i) > largest) largest = *(values + i);
    }
    printf("Smallest: %d\nLargest: %d\n", smallest, largest);
    free(values);
    return 0;
}
