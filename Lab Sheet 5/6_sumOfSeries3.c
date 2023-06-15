#include <stdio.h>
#include <math.h>

int main()
{
    float x, sum = 0;
    int n, factorial = 1;

    printf("Enter the value of x: ");
    scanf("%f", &x);
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        factorial *= i;
        sum += (pow(x, i) / factorial);
    }
    printf("The sum of series: x + x2/2! + x3/3! + x4/4! + x5/5! ... xn/n! is %f.", sum);

    return 0;
}