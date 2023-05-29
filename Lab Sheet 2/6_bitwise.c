#include <stdio.h>
int main()
{
    int a = 5, b = 9;
    printf("a = %d, b = %d\n", a, b);
    printf("a&b = %d\n", a & b);
    printf("a|b = %d\n", a | b);
    printf("a^b = %d\n", a ^ b);
    printf("(a<<b) = %d\n", (a << 2));
    printf("(b<<a) = %d\n", (b << 2));
    printf("(a>>b) = %d\n", (a >> 2));
    printf("(b>>a) = %d\n", (b >> 2));
    return 0;
}
