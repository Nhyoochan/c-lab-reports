// WAP  to  input  a  integer  number  in  main().  Write  a  user  define  function  isPrime()  to
// calculate  whether  the  number  is  prime  of  not.  Print  whether  the  number  is  prime  or
// not from the main().

#include <stdio.h>
int isPrime(int num)
{
    int flag = 1;
    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            flag = 0;
        }
    }
    return flag;
}
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    int prime = isPrime(a);
    if (prime == 1)
    {
        printf("%d is prime number.\n", a);
    }
    else
    {
        printf("%d is not a prime number.\n", a);
    }

    return 0;
}