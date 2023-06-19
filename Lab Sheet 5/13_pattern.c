#include <stdio.h>

void pattern1();
void pattern2();
void pattern3();
void pattern4();
void pattern5();
void pattern6();

int main()
{
    printf("\nPattern 1: \n");
    pattern1();
    printf("\nPattern 2: \n");
    pattern2();
    printf("\nPattern 3: \n");
    pattern3();
    printf("\nPattern 4: \n");
    pattern4();
    printf("\nPattern 5: \n");
    pattern5();
    printf("\nPattern 6: \n");
    pattern6();

    return 0;
}

void pattern1()
{
    for (int row = 1; row <= 5; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            printf("%d ", col);
        }
        printf("\n");
    }
}
void pattern2()
{
    for (int row = 5; row > 0; row--)
    {
        for (int col = 1; col <= row; col++)
        {
            printf("%d ", col);
        }
        printf("\n");
    }
}
void pattern3()
{
    for (int row = 1; row <= 5; row++)
    {
        for (int spaces = 5 - row; spaces > 0; spaces--)
        {
            printf(" ");
        }

        for (int stars = 1; stars <= 2 * row - 1; stars++)
        {
            printf("*");
        }
        printf("\n");
    }
}
void pattern4()
{
    int num = 1;
    for (int row = 1; row <= 5; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            printf("%d ", num);
            num++;
        }

        printf("\n");
    }
}
void pattern5()
{
    for (int row = 1; row <= 5; row++)
    {
        for (int spaces = 1; spaces < row; spaces++)
        {
            printf(" ");
        }
        for (int num1 = 1; num1 <= 6 - row; num1++)
        {
            printf("%d", num1);
        }
        for (int num2 = 5 - row; num2 > 0; num2--)
        {
            printf("%d", num2);
        }
        printf("\n");
    }
}
void pattern6()
{
    for (int row = 5; row > 0; row--)
    {
        for (int col = 5; col >= 6 - row; col--)
        {
            printf("%d ", col);
        }
        printf("\n");
    }
}