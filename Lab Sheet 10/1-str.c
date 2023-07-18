// WAP to input and display a string.

#include <stdio.h>
    
int main()
{
    char str[100];
    printf("Enter a string: ");
    gets(str);
    printf("The string is: %s\n", str);
    return 0;
}