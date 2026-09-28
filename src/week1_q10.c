/* Q10. Change temperature from Fahrenheit to Celsius or vice-versa as per user choice. */
#include <stdio.h>

int main(void)
{
    int c;
    float v, out;
    printf("1. Fahrenheit to Celsius  2. Celsius to Fahrenheit\nChoice: ");
    scanf("%d", &c);
    printf("Enter temperature: ");
    scanf("%f", &v);

    if (c == 1) {
        out = (v - 32.0f) * 5.0f / 9.0f;
        printf("Celsius = %.2f\n", out);
    } else {
        out = v * 9.0f / 5.0f + 32.0f;
        printf("Fahrenheit = %.2f\n", out);
    }
    return 0;
}
