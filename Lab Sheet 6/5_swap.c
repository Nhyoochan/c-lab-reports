// WAP  to  take  two  numbers  in  main().  Write  a  function  Swap()  to  swap  the  values  of
// the variables. Print the swapped values in main().

#include <stdio.h>
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    
}
int main()
{
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d%d", &x, &y);
    printf("Before swapping:\nx = %d, y = %d\n", x, y);
    swap(&x, &y);
    printf("After swapping:\nx = %d, y = %d\n", x, y);
    return 0;
}