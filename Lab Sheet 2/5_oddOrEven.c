// [Author: jrTilak]
// [Desc: Program to check if a number is odd or even using ternary operator]
#include <stdio.h>

int main()
{
    int number;
    char *result;
    // char result[10];

    printf("Enter a number: ");
    scanf("%d", &number);

    result = (number % 2 == 0) ? "even" : "odd";

    printf("The number is %s.\n", result);

    return 0;
}
