/* Q7. Exchange the last two digits of a user given number. */
#include <stdio.h>

int main(void)
{
    int n, last, second, rest;
    printf("Enter a number: ");
    scanf("%d", &n);
    last = n % 10;
    second = (n / 10) % 10;
    rest = n / 100;
    printf("After exchanging last two digits = %d\n", rest * 100 + last * 10 + second);
    return 0;
}
