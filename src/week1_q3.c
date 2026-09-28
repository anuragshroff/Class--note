/* Q3. Find the last digit of a number and print the new number deleting the last digit. */
#include <stdio.h>

int main(void)
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Last digit = %d\nNumber without last digit = %d\n", n % 10, n / 10);
    return 0;
}
