// WAP to take two float number in main(). Write a function single user define function
// calculator() to perform the addition, subtraction and multiplication. The sum,
// difference  and  product  should  be  displayed  from  the  main()  function.  [Use  the
// concept of pass by reference.].

#include <stdio.h>
void calc(int x, int y, int *sum, int *sub, int *mul, float *divide)
{
    *sum = x + y;
    *sub = x - y;
    *mul = x * y;
    *divide = x / (float)y;
}

int main()
{
    int x, y, sum, sub, mul;
    float divide;
    printf("Enter two numbers: ");
    scanf("%d%d", &x, &y);
    calc(x, y, &sum, &sub, &mul, &divide);
    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", sub);
    printf("Product: %d\n", mul);
    printf("Division: %f\n", divide);
    return 0;
}