#include <stdio.h>
#include <math.h>

int fact(int);

int main()
{
    int x;
    float value_of_nth_term, cosx = 1;
    int nth_term = 1;

    printf("Enter the value of x in (cosx): ");
    scanf("%d", &x);

    do
    {
        int n = 2 * nth_term; // n represents the power of x in each term

        value_of_nth_term = pow(x, n) / fact(n); // Calculate the value of the nth term

        if (nth_term % 2 == 0)
        {
            cosx -= value_of_nth_term; // Subtract even terms
        }
        else
        {
            cosx += value_of_nth_term; // Add odd terms
        }

        nth_term++;

    } while (fabs(value_of_nth_term) >= pow(10, -6)); // Repeat until the absolute value of the nth term is less than 10^-6

    printf("The value of cos(%d) is %f.\n", x, cosx);

    return 0;
}

int fact(int num)
{
    if (num <= 1)
    {
        return 1;
    }
    else
    {
        return num * fact(num - 1);
    }
}
