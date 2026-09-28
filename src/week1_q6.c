/* Q6. Double the last digit of a user given number and print the new number. */
#include <stdio.h>

int main()
{
    int n, last;
    printf("Enter a number: ");
    scanf("%d", &n);
    last = n % 10;
    printf("New number (last digit doubled) = %d\n", n - last + last * 2);
    return 0;
}
