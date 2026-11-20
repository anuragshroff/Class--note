#include <stdio.h>

static void swap(int *left, int *right)
{
    int temporary = *left;
    *left = *right;
    *right = temporary;
}

int main(void)
{
    int first, second;
    printf("Enter two integers: ");
    if (scanf("%d %d", &first, &second) != 2) {
        fprintf(stderr, "Invalid input.\n");
        return 1;
    }

    swap(&first, &second);
    printf("After swapping: %d %d\n", first, second);
    return 0;
}
