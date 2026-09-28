/* Q2. Read x1, y1, x2, y2 and find the distance between the two points. */
#include <math.h>
#include <stdio.h>

int main(void)
{
    float x1, y1, x2, y2, dx, dy;
    printf("Enter x1 y1 x2 y2: ");
    scanf("%f %f %f %f", &x1, &y1, &x2, &y2);
    dx = x2 - x1;
    dy = y2 - y1;
    printf("Distance = %.4f\n", sqrt(dx * dx + dy * dy));
    return 0;
}
