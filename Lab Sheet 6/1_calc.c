// Write a program to add, subtract, multiply and divide two integers using user defined
// function add(), sub(), mul() and div().

#include <stdio.h>
int add(int a, int b)
{
    return a + b;
}
int sub(int a, int b)
{
    return a - b;
}
float mul(float a, float b)
{
    return a * b;
}
float div(float a, float b)
{
    return a / b;
}

int main()
{
    int x = 10, y = 4;
    int a = add(x, y);
    int s = sub(x, y);
    float m = mul(x, y);
    float d = div(x, y);
    printf("Addition: %d\n", a);
    printf("Subtraction: %d\n", s);
    printf("Multiplication: %f\n", m);
    printf("Division: %f\n", d);    
    return 0;
}