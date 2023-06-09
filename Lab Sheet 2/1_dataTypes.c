// [Author: jrTilak]
// [Desc: Program to print the size of different data types]
#include <stdio.h>

int main()
{
    int integerVariable = 10;
    float floatVariable = 3.14;
    char charVariable = 'A';

    printf("Integer Variable: %d\n", integerVariable);
    printf("Float Variable: %f\n", floatVariable);
    printf("Character Variable: %c\n\n", charVariable);

    printf("Size of Integer Variable: %d bytes\n", sizeof(integerVariable));
    printf("Size of Float Variable: %d bytes\n", sizeof(floatVariable));
    printf("Size of Character Variable: %d bytes\n", sizeof(charVariable));

    return 0;
}
