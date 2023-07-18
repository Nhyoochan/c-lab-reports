// WAP to illustrate the use of string functions (strlen, strcpy, strcat, strcmp, strrev).
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], str1[100],str2[100];
    printf("Enter a string: ");
    gets(str);
    printf("Enter another string: ");
    gets(str1);
    printf("The first string is: %s\n", str);
    printf("The length of the first string is: %d\n", strlen(str));
    strcpy(str2, str);
    printf("The copied string is: %s\n", str2);
    strcat(str2, str);
    printf("The concatenated string is: %s\n", str);
    printf("The reversed string is: %s\n", strrev(str));
    if (strcmp(str, str1) == 0)
        printf("The input strings are same.\n");
    else
        printf("The input strings are not same.\n");
    return 0;
}