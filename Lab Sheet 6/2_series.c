// WAP to display sum of series: x + x2/2! + x3/3! + x4/4! + x5/5! ... xn/n!. User defined
// function factorial() and power() should be used to calculate the factorial and power.

#include <stdio.h>
int factorial(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    return n * factorial(n - 1);
}

int power(int x, int n)
{
    if (n == 0)
    {
        return 1;
    }
    return x * power(x, n - 1);
}
int main()
{
    float term = 0;
    int x, n;
    printf("Enter the value of x and n: ");
    scanf("%d%d", &x, &n);
    for (int i = 1; i <= n; i++)
    {
        term += power(x, i) / (float)factorial(i);
    }
    printf("The sum of series: x + x2/2! + x3/3! + x4/4! + x5/5! ... xn/n! s %f", term);

    return 0;
}