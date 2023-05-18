#include <stdio.h>
#include <math.h>

int main()
{
    double degrees, radians;

    printf("Enter an angle in degrees: ");
    scanf("%lf", &degrees);

    radians = degrees * M_PI / 180.0;

    printf("%.2f degrees is equal to %.2f radians.\n", degrees, radians);

    return 0;
}

