/* Q5. Accept the marks of a student and display the grade accordingly.
   100-90: O, 89-80: E, 79-70: A, 69-60: B, 59-50: C, 49-40: D, Rest: F */
#include <stdio.h>

int main(void)
{
    int m;
    printf("Enter marks (0-100): ");
    scanf("%d", &m);
    if (m < 0 || m > 100) { printf("Invalid marks\n"); return 1; }

    if (m >= 90)      printf("Grade: O\n");
    else if (m >= 80) printf("Grade: E\n");
    else if (m >= 70) printf("Grade: A\n");
    else if (m >= 60) printf("Grade: B\n");
    else if (m >= 50) printf("Grade: C\n");
    else if (m >= 40) printf("Grade: D\n");
    else              printf("Grade: F\n");
    return 0;
}
