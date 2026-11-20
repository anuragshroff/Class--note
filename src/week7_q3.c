#include <stdio.h>

int main(void)
{
    int value;
    printf("Enter an integer: ");
    if (scanf("%d", &value) != 1) {
        fprintf(stderr, "Invalid integer.\n");
        return 1;
    }

    printf("Value: %d\nAddress: %p\n", value, (void *)&value);
    return 0;
}
