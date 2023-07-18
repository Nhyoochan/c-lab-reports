// WAP to store 10 integer elements in an array and print it.
#include <stdio.h>

int main()
{
    int arr[10];
    printf("Enter 10 integers: ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("The array is: ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}