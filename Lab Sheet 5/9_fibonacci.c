#include <stdio.h>

int main()
{
    // n_1 is n-1th term and n_2 is n-2th term of fibonacci series
    int n, fibonacci_term = 0, n_1, n_2;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Fibonacci Series to %dth term: \n", n);
    for (int i = 1; i <= n; i++)
    {
        if (i == 1)
        {
            fibonacci_term = 0;
        }
        else if (i == 2)
        {
            n_1 = fibonacci_term;
            fibonacci_term = 1;
        }
        else
        {
            n_2 = n_1;
            n_1 = fibonacci_term;
            fibonacci_term = n_2 + n_1;
        }
        printf("%d ", fibonacci_term);
    }
    return 0;
}