#include <stdio.h>

static int factorial(int number, unsigned long long *result)
{
    *result = 1;
    for (int i = 2; i <= number; ++i) {
        if (*result > (unsigned long long)-1 / (unsigned)i) return 0;
        *result *= (unsigned)i;
    }
    return 1;
}

int main(void)
{
    int number;
    unsigned long long result;
    printf("Enter a non-negative integer (0-20): ");
    if (scanf("%d", &number) != 1 || number < 0 || number > 20) {
        fprintf(stderr, "Enter an integer from 0 to 20.\n");
        return 1;
    }

    if (!factorial(number, &result)) {
        fprintf(stderr, "Factorial is too large.\n");
        return 1;
    }
    printf("%d! = %llu\n", number, result);
    return 0;
}
