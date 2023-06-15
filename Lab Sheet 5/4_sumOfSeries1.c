#include <stdio.h>

int main()
{
    int n;
    float sum = 0;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        sum += 1 / (float)i;
    }
    printf("The sum of series: 1 + 1/2 + 1/3 + 1/4 + 1/5 ... 1/n is %f", sum);

    return 0;
}