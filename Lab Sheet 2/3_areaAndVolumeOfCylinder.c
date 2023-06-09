// [Author: jrTilak]
// [Desc: Program to calculate the area and volume of a cylinder]
#include <stdio.h>

#define PI 3.14159

int main()
{
    float radius = 2.5;
    float height = 5.0;
    float area, volume;

    area = 2 * PI * radius * (radius + height);
    volume = PI * radius * radius * height;

    printf("Area of the cylinder: %.2f\n", area);
    printf("Volume of the cylinder: %.2f\n", volume);

    return 0;
}