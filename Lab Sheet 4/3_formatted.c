#include <stdio.h>

int main()
{
    int a = 15;
    float b = 20.43;
    int c = 35;

    printf("A = %6d|%-6d|%6d|%-6d|%6d|%-6d|%6d|%-6d|%6d|%-6d|", a, a, a, a, a, a, a, a, a, a);
    printf("\nB = %6.2f|%-6.2f|%6.2f|%-6.2f|%6.2f|%-6.2f|%6.2f|%-6.2f|%6.2f|%-6.2f|", b, b, b, b, b, b, b, b, b, b);
    printf("\nC = %6d|%-6d|%6d|%-6d|%6d|%-6d|%6d|%-6d|%6d|%-6d|", c, c, c, c, c, c, c, c, c, c);
    return 0;
}
