/* Q4. Test whether any year is a Leap year or not. */
#include <stdio.h>

int main(void)
{
    int y;
    printf("Enter a year: ");
    scanf("%d", &y);
    if (y % 400 == 0 || (y % 4 == 0 && y % 100 != 0))
        printf("%d is a Leap year\n", y);
    else
        printf("%d is not a Leap year\n", y);
    return 0;
}
