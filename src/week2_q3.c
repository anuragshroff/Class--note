/* Q3. Check whether a number is even or odd. */
#include <stdio.h>

int main(void)
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("%d is %s\n", n, (n % 2 == 0) ? "even" : "odd");
    return 0;
}
