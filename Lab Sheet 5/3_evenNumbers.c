#include <stdio.h>

int main()
{
    int min, max, count = 0;
    printf("Enter the minimum and maximum value: ");
    scanf("%d%d", &min, &max);
    if (min > max)
    {
        int temp = min;
        min = max;
        max = temp;
    }
    printf("The even numbers between %d and %d are: ", min, max);
    for (int i = min + 1; i < max; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d ", i);
            count++;
        }
    }
    if (count == 0)
    {
        printf("none ");
    }
    printf("\nThere are %d even numbers.\n", count);

    return 0;
}