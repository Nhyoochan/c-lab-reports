// WAP to concatenate two string using user define function.

#include <stdio.h>

void str_concat(char str1[], char str2[])
{
    int i = 0, j = 0;
    while (str1[i] != '\0')
    {
        i++;
    }
    while (str2[j] != '\0')
    {
        str1[i] = str2[j];
        i++;
        j++;
    }
    str1[i] = '\0';
}
    
int main()
{
    char str1[100], str2[100];
    printf("Enter a string: ");
    gets(str1);
    printf("Enter another string: ");
    gets(str2);
    str_concat(str1, str2);
    printf("The concatenated string is: %s\n", str1);    
    return 0;
}