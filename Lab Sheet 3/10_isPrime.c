#include <stdio.h>

int main()
{
    int number, isPrime = 1;

    // Input a number from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    if (number <= 0)
    {
        // Number is less than or equal to zero
        printf("Number: %d\n", number);
    }
    else if (number == 1)
    {
        // Number is 1
        printf("Neither prime nor composite\n");
    }
    else if (number == 2)
    {
        // Number is 2, the smallest and only even prime number
        printf("Smallest and only even prime number\n");
    }
    else
    {
        // Number is greater than 2
        for (int i = 2; i <= number / 2; i++)
        {
            if (number % i == 0)
            {
                // Number is not prime
                isPrime = 0;
                break;
            }
        }

        if (isPrime)
        {
            // Number is prime
            printf("Number is prime\n");
        }
        else
        {
            // Number is not prime
            printf("Number is not prime\n");

            if (number % 2 == 0)
            {
                // Number is even
                printf("Number is even\n");
            }
            else
            {
                // Number is odd
                printf("Number is odd\n");
            }
        }
    }

    return 0;
}
