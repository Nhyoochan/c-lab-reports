#include <stdio.h>
#include <math.h>

int main()
{
    int num, rem, armstrong = 0, count = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    int org_num = num;

    while (org_num != 0)
    {
        org_num /= 10;
        count++;
    }
    org_num = num; 
    while (org_num != 0)
    {
        rem = org_num % 10;
        org_num /= 10;
        armstrong += pow(rem, count);
    }

    if (num == armstrong)
    {
        printf("%d is an Armstrong number.", num);
    }
    else
    {
        printf("%d is not an Armstrong number.", org_num);
    }

    return 0;
}
