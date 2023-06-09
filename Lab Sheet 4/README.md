# LAB SHEET NO.4 [To be familiar with Unformatted and Formatted I/0]
This lab sheet is a part of the Computer Programming course for Bachelor's in Computer Engineering at Tribhuvan University. It focuses on introducing the basics of C programming. In this sheet, you will find a set of questions related to C programming concepts. Each question includes a title, introduction, code, possible outputs, description, and a conclusion.

## Table of Contents
1. [WAP to get your name, address and display using unformatted I/O.](#q1)
2. [ WAP to get a character form the user using unformatted I/O and display the ASCII value of the entered character.](#q2)
3. [WAP to display the output as (take a=15, b=20.43, c=35):](#q3)
    ```
    A =     15|15    |    15|15    |    15|15    |    15|15    |    15|15    |
    B =  20.43|20.43 | 20.43|20.43 | 20.43|20.43 | 20.43|20.43 | 20.43|20.43 |
    C =     35|35    |    35|35    |    35|35    |    35|35    |    35|35    |
    ```
4. [WAP to display the output as below using formatted I/O [take char a[]=”I Love Nepal”].](#q4) 
    ```
    I
    I L
    I Lo
    I Lov
    I Love
    I Love N
    I Love Ne
    I Love Nep
    I Love Nepa
    I Love Nepal
    ```



---
---

## See Also
* [Lab Sheet 4.docx](./lab-sheet-4.docx)
* [Lab Sheet 4.pdf](./lab-sheet-4.pdf)


---
---
<br/>
<br/>

># <span id="q1">1. WAP to get your name, address and display using unformatted I/O.
</span>

## **Introduction**
This program allows the user to enter their name and address using unformatted I/O functions (gets() and puts()). The program then displays the entered name and address on the console.
## **Code**
```c
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
```

## **Possible Output**
```
Enter your name: John Doe
Enter your address: 123 Main Street, City

Your details:
Name: John Doe
Address: 123 Main Street, City
```

## **Description**
* The program declares two character arrays name and address with a maximum length of 100 characters to store the user's name and address.
* The user is prompted to enter their name using the printf() function.
* The gets() function is used to read the name entered by the user and store it in the name array.
Similarly, the user is prompted to enter their address using the printf() function.
* The gets() function is used again to read the address entered by the user and store it in the address array.
* The program then displays a header "Your details:" using the printf() function.
* The user's name is displayed using the puts() function, which automatically appends a newline character at the end.
* The user's address is displayed in a similar manner using the puts() function.
## **Conclusion**
The program successfully demonstrates the use of unformatted I/O functions (gets() and puts()) to read and display the user's name and address. The user is prompted to enter their name and address, and the program stores the input in character arrays. The entered name and address are then printed on the console using the puts() function. The program provides a simple example of how unformatted I/O functions can be used to handle string inputs and outputs.

---
---
<br/>
<br/>

># <span id="q2">WAP to get a character form the user using unformatted I/O and display the ASCII value of the entered character
</span>

## **Introduction**
This program allows the user to enter a character and displays its corresponding ASCII value.
## **Code**
```c
// [Desc: Reads and prints ASCII value of a character]
#include <stdio.h>

int main()
{
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    printf("ASCII value of the entered character is: %d\n", ch);

    return 0;
}
```

## **Possible Output**
```
Enter a character: A
ASCII value of the entered character is: 65
```
```
Enter a character: #
ASCII value of the entered character is: 35
```
```
Enter a character: x
ASCII value of the entered character is: 120
```

## **Description**
* The program begins by declaring a variable ch of type char to store the input character.
* The user is prompted to enter a character using the printf() function.
* The input character is read using the scanf() function with the format specifier %c. The &ch notation is used to store the input character in the variable ch.
* The program uses the printf() function to display the ASCII value of the entered character. The %d format specifier is used to print the decimal value of the character.
* The program then returns 0, indicating successful execution.
## **Conclusion**
This program demonstrates how to read a character from the user and display its ASCII value. It provides a simple way to obtain the numerical representation of a character based on the ASCII encoding scheme.


---
---
<br/>
<br/>

># <span id="q3">WAP to display the output as [take a=15, b=20.43, c=35]:</span>

## **Introduction**
This program displays the values of variables a, b, and c in formatted columns.
## **Code**
```c
// [Desc: Prints values of variables in formatted columns]
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
```

## **Possible Output**
```
A =     15|15    |    15|15    |    15|15    |    15|15    |    15|15    |
B =  20.43|20.43 | 20.43|20.43 | 20.43|20.43 | 20.43|20.43 | 20.43|20.43 |
C =     35|35    |    35|35    |    35|35    |    35|35    |    35|35    |
```

## **Description**
* The program begins by declaring and initializing three variables: a of type int with a value of 15, b of type float with a value of 20.43, and c of type int with a value of 35.
* The printf() function is used to display the values of the variables in formatted columns.
For variable a, the format specifier %6d is used to print the integer values in a field width of 6 characters with right alignment, and %-6d is used for left alignment.
* Similarly, for variable b, the format specifier %6.2f is used to print the floating-point values with 6 characters in total, including 2 decimal places, and %-6.2f is used for left alignment.
* The same format specifiers are applied for variable c.
* The | symbol is used to separate the values in the columns.
* The program includes newline characters (\n) to create separate lines for each variable.
* The program then returns 0, indicating successful execution.

## **Conclusion**
This program demonstrates how to display the values of variables in formatted columns. By using appropriate format specifiers and alignment options, the program achieves a neat and organized representation of the variable values. This can be useful for visualizing data in tabular form or aligning output for better readability.

---
---
<br/>
<br/>

># <span id="q4">WAP to display the output as below using formatted I/O [take char a[]=”I Love Nepal”].
</span>

## **Introduction**
This program displays a string in formatted columns using formatted I/O.
## **Code**
```c
// [Desc: Prints a string in formatted columns]
#include <stdio.h>

int main()
{
    char a[] = "I Love Nepal";

    printf("%1.1s\n", a);
    printf("%1.3s\n", a);
    printf("%1.4s\n", a);
    printf("%1.5s\n", a);
    printf("%1.7s\n", a);
    printf("%1.8s\n", a);
    printf("%1.9s\n", a);
    printf("%1.10s\n", a);
    printf("%1.11s\n", a);
    printf("%1.12s\n", a);

    return 0;
}
```

## **Possible Output**
```
I
I L
I Lo
I Lov
I Love
I Love N
I Love Ne
I Love Nep
I Love Nepa
I Love Nepal
```

## **Description**
* The program declares a character array a and initializes it with the string "I Love Nepal".
* The printf() function is used to display the string in formatted columns.
* The format specifier %1.1s is used to print the first character of the string, followed by a newline character (\n).
* Similarly, the format specifiers %1.3s, %1.4s, %1.5s, %1.7s, %1.8s, %1.9s, %1.10s, %1.11s, and %1.12s are used to print substrings of different lengths.
* The number 1 represents the field width, which specifies the minimum number of characters to be printed.
* The program includes newline characters (\n) to create separate lines for each formatted output.
* The program then returns 0, indicating successful execution
## **Conclusion**
This program demonstrates how to print a string in formatted columns using formatted I/O. By using different field widths and format specifiers, the program extracts and prints substrings of varying lengths from the original string. This technique can be useful for formatting text in a specific layout or extracting specific portions of a string for display.

---
---