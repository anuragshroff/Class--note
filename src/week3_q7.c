/* Q7. Menu driven Volume Calculator - Sphere, Cylinder, Cone, Cuboid.
   Runs in a loop until the user chooses to exit. */
#include <math.h>
#include <stdio.h>

int main(void)
{
    int ch;
    double r, h, l, b, v;
    for (;;) {
        printf("1. Sphere\n2. Cylinder\n3. Cone\n4. Cuboid\n5. Exit\nChoice: ");
        if (scanf("%d", &ch) != 1) break;

        switch (ch) {
        case 1:
            printf("Radius: "); scanf("%lf", &r);
            printf("Volume of Sphere = %.3f\n", 4.0 / 3.0 * M_PI * r * r * r);
            break;
        case 2:
            printf("Radius: "); scanf("%lf", &r);
            printf("Height: "); scanf("%lf", &h);
            printf("Volume of Cylinder = %.3f\n", M_PI * r * r * h);
            break;
        case 3:
            printf("Radius: "); scanf("%lf", &r);
            printf("Height: "); scanf("%lf", &h);
            printf("Volume of Cone = %.3f\n", M_PI * r * r * h / 3.0);
            break;
        case 4:
            printf("Length: "); scanf("%lf", &l);
            printf("Breadth: "); scanf("%lf", &b);
            printf("Height: "); scanf("%lf", &h);
            v = l * b * h;
            printf("Volume of Cuboid = %.3f\n", v);
            break;
        case 5:
            return 0;
        default:
            printf("Invalid choice\n");
        }
    }
    return 0;
}                                                           