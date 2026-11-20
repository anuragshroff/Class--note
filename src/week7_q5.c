#include <stdio.h>

static void calculate(const double *a, const double *b, double *sum, double *product)
{
    *sum = *a + *b;
    *product = *a * *b;
}

int main(void)
{
    double first, second, sum, product;
    printf("Enter two numbers: ");
    if (scanf("%lf %lf", &first, &second) != 2) {
        fprintf(stderr, "Invalid input.\n");
        return 1;
    }

    calculate(&first, &second, &sum, &product);
    printf("Sum: %.2f\nProduct: %.2f\n", sum, product);
    return 0;
}
