#include <stdio.h>

int main()
{
    int n = 1;
    float term = 1, factorial, x, cosx = 1;
    printf("Enter the value of x (in degrees): ");
    scanf("%f", &x);
    float x_in_deg = x;
    /*  Converting degrees to radians */
    x = x * (3.142 / 180.0);
    do
    {
        factorial = 2 * n * (2 * n - 1);
        term = -term * x * x / factorial;
        cosx = cosx + term;
        n++;
    } while (n < 999);
    printf("Cos(%.2fdeg):  %.2f\n", x_in_deg, cosx);
    return 0;
}