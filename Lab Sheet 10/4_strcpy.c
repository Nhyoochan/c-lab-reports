// WAP to copy the string without using string function. 

#include <stdio.h>
    
int main()
{
    char str[100], rev[100];
    printf("Enter a string: ");
    gets(str);
    int i = 0;
    while (str[i] != '\0')
    {
        rev[i] = str[i];
        i++;
    }
    rev[i] = '\0';
    printf("The copied string is: %s\n", rev);
    return 0;
}