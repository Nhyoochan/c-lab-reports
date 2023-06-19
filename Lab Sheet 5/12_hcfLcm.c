#include <stdio.h>

int main()
{
    int num1, num2, larger_num, smaller_num, hcf, lcm;
    printf("Enter two numbers: ");
    scanf("%d%d", &num1, &num2);
    larger_num = num1 > num2 ? num1 : num2;
    smaller_num = num2 > num1 ? num1 : num2;
    for (int i = 1; i <= smaller_num; i++)
    {
        if (larger_num % i == 0 && smaller_num % i == 0)
        {
            hcf = i;
        }
    }
    for (int i = larger_num;; i++)
    {
        if (i % larger_num == 0 && i % smaller_num == 0)
        {
            lcm = i;
            break;
        }
    }
    printf("HCF of %d and %d is: %d\n", num1, num2, hcf);
    printf("LCM of %d and %d is: %d\n", num1, num2, lcm);
    return 0;
}