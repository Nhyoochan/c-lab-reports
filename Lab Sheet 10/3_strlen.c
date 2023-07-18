// WAP to count the length of string without using string function.
#include <stdio.h>

int main()
{
    char str[100];
    printf("Enter a string: ");
    gets(str);
    int i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    printf("The length of the string is: %d\n", i);
    return 0;
}