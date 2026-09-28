/* Q5. Delete the last two digits of a user given number and print the new number. */
#include <stdio.h>

int main(void)
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Number without last two digits = %d\n", n / 100);
    return 0;
}
