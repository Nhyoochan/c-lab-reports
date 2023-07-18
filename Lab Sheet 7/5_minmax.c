// WAP  to  pass  1D  array  to  the  minmax()  function.  The  function  should  calculate  the
// maximum  and  minimum  among  the  elements  of  the  array.  Print  the  maximum  and
// minimum in the main() function.

#include <stdio.h>
void minmax(int arr[], int n, int *min, int *max)
{
    *min = arr[0];
    *max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < *min)
        {
            *min = arr[i];
        }
        if (arr[i] > *max)
        {
            *max = arr[i];
        }
    }
}
int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int min, max;
    minmax(arr, n, &min, &max);
    printf("The minimum is %d\n", min);
    printf("The maximum is %d\n", max);
    return 0;
}