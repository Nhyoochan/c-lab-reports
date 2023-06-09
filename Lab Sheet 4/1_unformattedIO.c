// [Desc: Reads and prints name and address using unformatted I/O]
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
