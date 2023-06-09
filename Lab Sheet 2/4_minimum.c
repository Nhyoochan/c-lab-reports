// [Author: jrTilak]
// [Desc: Program to find the minimum of two numbers using ternary operator]
#include <stdio.h>

int main()
{
    int num1, num2, minimum;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    minimum = (num1 < num2) ? num1 : num2;

    printf("The minimum number is: %d\n", minimum);

    return 0;
}
