#include <stdio.h>

int main()
{
    int number;
    char *result;

    printf("Enter a number: ");
    scanf("%d", &number);

    result = (number % 2 == 0) ? "even" : "odd";

    printf("The number is %s.\n", result);

    return 0;
}
