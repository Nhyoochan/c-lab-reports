// WAP to illustrate the concept of global and static variables

#include <stdio.h>

// declaring global variable;
int global = 5;

void change()
{
    global = 15;
}

int main()
{
    // global variable
    printf("Global variable: %d\n", global);
    global = 10;
    printf("Global variable after changing from main: %d\n", global);
    change();
    printf("Global variable after changing from change(): %d\n", global);

    // static variable
    for (int i = 0; i < 5; i++)
    {
        static int count = 0;
        count++;
        printf("count = %d\n", count);
    }

    return 0;
}