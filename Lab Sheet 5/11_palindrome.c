#include <stdio.h>

int main()
{
    int num, reversed = 0, org_num;
    printf("Enter a number: ");
    scanf("%d", &num);
    org_num = num;
    for (int i = 0; num != 0; i++)
    {
        reversed = ((reversed * 10) + (num % 10));
        num /= 10;
    }
    if (org_num == reversed){
        printf("%d is palindrome number.", org_num);
    }
    else{
        printf("%d is not a palindrome number.", org_num);
    }
        return 0;
}