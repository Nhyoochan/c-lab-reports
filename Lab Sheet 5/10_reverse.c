#include <stdio.h>

int main()
{
    int num, reversed = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Before Swapping: %d\n", num);
    for (int i = 0; num != 0; i++)
    {
        reversed = ((reversed * 10) + (num % 10));
        num /= 10;
    }
    printf("After Swapping: %d\n", reversed);
    return 0;
}