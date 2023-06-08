#include <stdio.h>

int main()
{
    char name[100], address[100];

    printf("Enter your name: ");
    gets(name);

    printf("Enter your address: ");
    gets(address);

    printf("\nYour details:\n");
    printf("Name: ");
    puts(name);
    printf("Address: ");
    puts(address);

    return 0;
}
