/* Q8. Read two numbers and find their product after exchanging last digits. */
#include <stdio.h>

int main(void)
{
    int a, b, al, as, bl, bs;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    al = a % 10; as = (a / 10) % 10; a = (a / 100) * 100 + al * 10 + as;
    bl = b % 10; bs = (b / 10) % 10; b = (b / 100) * 100 + bl * 10 + bs;

    printf("After exchanging last digits: %d and %d\nProduct = %d\n", a, b, a * b);
    return 0;
}
