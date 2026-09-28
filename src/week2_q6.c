/* Q6. Menu driven calculator using switch-case.
   Menu: Addition, Subtraction, Multiplication, Division, Modulus, Exponent. */
#include <math.h>
#include <stdio.h>

int main(void)
{
    float a, b, r;
    int op;
    printf("Enter two operands: ");
    scanf("%f %f", &a, &b);
    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n"
           "5. Modulus\n6. Exponent\nChoice: ");
    scanf("%d", &op);

    switch (op) {
    case 1: r = a + b; break;
    case 2: r = a - b; break;
    case 3: r = a * b; break;
    case 4:
        if (b == 0) { printf("Division by zero\n"); return 1; }
        r = a / b;
        break;
    case 5: r = (float)((int)a % (int)b); break;
    case 6: r = powf(a, b); break;
    default: printf("Invalid operation\n"); return 1;
    }
    printf("Result = %g\n", r);
    return 0;
}
