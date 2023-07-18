// WAP to compare two string without using string function.
#include <stdio.h>
    
int main()
{
    char str1[100], str2[100];
    printf("Enter a string: ");
    gets(str1);
    printf("Enter another string: ");
    gets(str2);
    int i = 0, flag = 0;
    while (str1[i] != '\0' && str2[i] != '\0')
    {
        if (str1[i] != str2[i])
        {
            flag = 1;
            break;
        }
        i++;
    }
    if (flag == 0)
        printf("The input strings are same.\n");
    else
        printf("The input strings are not same.\n");
    return 0;
}