# LAB SHEET NO.2 [To be familiar Data types, Constants, Operators and Expressions]

This lab sheet is a part of the Computer Programming course for Bachelor's in Computer Engineering at Tribhuvan University. It focuses on introducing the basics of C programming. In this sheet, you will find a set of questions related to C programming concepts. Each question includes a title, introduction, code, possible outputs, description, and a conclusion.

## Table of Contents
1. [WAP to declare integer, float and character variable. Initialize them with certain value and print those values. Also display the size of variables.](#q1)
2. [WAP to swap the values of the variable with and without using third variable.](#q2)
3. [WAP to calculate the area and volume of a cylinder using pre-processor directive for value of PI.](#q3)
4. [WAP to input two numbers from user and display the minimum using conditional operator.](#q4)
5. [WAP to display whether a number is even or odd using conditional operator.](#q5)
6. [What are the output of the following programs.](#q6)

---
---

## See Also
* [Lab Sheet 2.docx](./lab-sheet-2.docx)
* [Lab Sheet 2.pdf](./lab-sheet-2.pdf)


---
---
<br/>
<br/>

>## <span id="q1">1. WAP to declare integer, float, and character variables, initialize them, and print their values and sizes in C</span>
### **Introduction**
This program declares integer, float, and character variables, initializes them with certain values, and then prints their values and sizes using the C programming language.
### **Code**

```c
#include <stdio.h>

int main()
{
    int integerVariable = 10;
    float floatVariable = 3.14;
    char charVariable = 'A';

    printf("Integer Variable: %d\n", integerVariable);
    printf("Float Variable: %f\n", floatVariable);
    printf("Character Variable: %c\n\n", charVariable);

    printf("Size of Integer Variable: %lu bytes\n", sizeof(integerVariable));
    printf("Size of Float Variable: %lu bytes\n", sizeof(floatVariable));
    printf("Size of Character Variable: %lu bytes\n", sizeof(charVariable));

    return 0;
}
```
### **Possible Output**
```
Integer Variable: 10
Float Variable: 3.140000
Character Variable: A

Size of Integer Variable: 4 bytes
Size of Float Variable: 4 bytes
Size of Character Variable: 1 byte
```

### **Description**
* The program starts with the inclusion of the stdio.h header file, which allows the usage of input/output functions in the C program.

* The main() function is the entry point of the program, and the execution of the program begins from here.

* Inside the main() function, three variables are declared: integerVariable of type int, floatVariable of type float, and charVariable of type char. They are initialized with the values 10, 3.14, and 'A' respectively.

* The printf() function is used to display the values of the variables on the screen. The %d format specifier is used for integers, %f is used for floats, and %c is used for characters.

* The \n character represents a newline, which moves the cursor to the next line after displaying each message.

* The sizeof() operator is used to determine the size of each variable in bytes. The sizeof() operator returns the size as an unsigned long integer, which is printed using the %lu format specifier.

* The return 0; statement indicates the successful execution of the program. By convention, a return value of 0 indicates that the program terminated without any errors.
### **Conclusion**
This program demonstrates how to declare integer, float, and character variables, initialize them, and print their values and sizes using the printf() function and the sizeof() operator in C. It showcases the basic syntax for declaring and initializing variables of different data types, and also provides insight into the memory sizes occupied by each variable. In this example, the integer variable has a size of 4 bytes, the float variable has a size of 4 bytes, and the character variable has a size of 1 byte.


---
---
<br/>
<br/>

>## <span id="q2">2. WAP to swap the values of variables with and without using a third variable in C</span>
### **Introduction**
This program demonstrates two approaches to swap the values of variables in C: one using a third variable and another without using a third variable. It provides separate descriptions for each approach.

## APPROACH I: (Using a third variable)
### **Code**

```c
#include <stdio.h>

int main()
{
    int num1 = 10;
    int num2 = 20;
    int temp;
    
    printf("Before swapping:\n");
    printf("num1 = %d\n", num1);
    printf("num2 = %d\n", num2);

    temp = num1;
    num1 = num2;
    num2 = temp;

    printf("After swapping (using third variable):\n");
    printf("num1 = %d\n", num1);
    printf("num2 = %d\n", num2);

    return 0;
}
```
### **Possible Output**
```
Before swapping:
num1 = 10
num2 = 20
After swapping (using third variable):
num1 = 20
num2 = 10
```

### **Description**
* In this approach, two variables num1 and num2 are declared and initialized with values 10 and 20 respectively.
* The values of num1 and num2 are displayed before swapping using the printf() function.
* A temporary variable temp is declared to hold the value of num1 temporarily.
* The value of num1 is assigned to num2, and the value of temp is assigned to num1. This swapping operation effectively exchanges the values of num1 and num2.
* The values of num1 and num2 are displayed after swapping using the printf() function, confirming that the values have been successfully swapped.

---
## APPROACH II: (Without using a third variable)
### **Code**

```c
#include <stdio.h>

int main()
{
    int num1 = 10;
    int num2 = 20;

    printf("Before swapping:\n");
    printf("num1 = %d\n", num1);
    printf("num2 = %d\n", num2);

    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;

    printf("After swapping (without using third variable):\n");
    printf("num1 = %d\n", num1);
    printf("num2 = %d\n", num2);

    return 0;
}
```
### **Possible Output**
```
Before swapping:
num1 = 10
num2 = 20
After swapping (without using third variable):
num1 = 20
num2 = 10
```

### **Description**
* In this approach, two variables num1 and num2 are declared and initialized with values 10 and 20 respectively.
* The values of num1 and num2 are displayed before swapping using the printf() function.
* The values of num1 and num2 are swapped without using a third variable by performing arithmetic operations.
* The value of num1 is updated to the sum of num1 and num2.
* The value of num2 is updated to the difference between the updated num1 and the original num2.
* The value of num1 is updated to the difference
### **Conclusion**
This program demonstrates two methods to swap the values of variables in C: one using a third variable and another without using a third variable. Swapping variables is a common operation in programming, and it can be useful in various scenarios. The program showcases how the values of num1 and num2 can be exchanged using a temporary variable to store the value temporarily, as well as by performing arithmetic operations without the need for a third variable. Both methods result in the values of num1 and num2 being swapped successfully.


---
---
<br/>
<br/>

>## <span id="q3">3. WAP to calculate the area and volume of a cylinder using a pre-processor directive for the value of PI</span>
### **Introduction**
This program calculates the area and volume of a cylinder using the formulae for a cylinder's surface area and volume. The value of PI is defined using a pre-processor directive in the C programming language.

### **Code**

```c
#include <stdio.h>

#define PI 3.14159

int main()
{
    float radius = 2.5;
    float height = 5.0;
    float area, volume;

    area = 2 * PI * radius * (radius + height);
    volume = PI * radius * radius * height;

    printf("Area of the cylinder: %.2f\n", area);
    printf("Volume of the cylinder: %.2f\n", volume);

    return 0;
}
```
### **Possible Output**
```
Area of the cylinder: 122.52
Volume of the cylinder: 98.17
```

### **Description**
* The program starts with the inclusion of the stdio.h header file, which allows the usage of input/output functions in the C program.
* The value of PI is defined using a pre-processor directive #define. In this case, PI is defined as 3.14159.
* The main() function is the entry point of the program, and the execution of the program begins from here.
* Two float variables radius and height are declared and initialized with values 2.5 and 5.0 respectively, representing the radius and height of the cylinder.
* Two float variables area and volume are declared to store the calculated values of the cylinder's area and volume.
* The area of the cylinder is calculated using the formula 2 * PI * radius * (radius + height).
* The volume of the cylinder is calculated using the formula PI * radius * radius * height.
* The calculated values of the area and volume are displayed using the printf() function with a precision of 2 decimal places.
* The return 0; statement indicates the successful execution of the program. By convention, a return value of 0 indicates that the program terminated without any errors.
### **Conclusion**
This program demonstrates the calculation of the area and volume of a cylinder using the formulae for surface area and volume. By defining the value of PI using a pre-processor directive, the program ensures accurate calculations. The calculated area and volume values are displayed, providing the user with the results. This program can be used as a reference for calculating the area and volume of cylinders in various applications.


---
---
<br/>
<br/>

>## <span id="q4">4. WAP to input two numbers from the user and display the minimum using the conditional operator</span>
### **Introduction**
This program allows the user to input two numbers and uses the conditional operator (ternary operator) to determine the minimum of the two numbers. The minimum number is then displayed as the output.
### **Code**

```c
#include <stdio.h>

int main()
{
    int num1, num2, minimum;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    minimum = (num1 < num2) ? num1 : num2;

    printf("The minimum number is: %d\n", minimum);

    return 0;
}
```
### **Possible Output**
```
Enter the first number: 10
Enter the second number: 5
The minimum number is: 5
```

### **Description**
* The program starts with the inclusion of the stdio.h header file, which allows the usage of input/output functions in the C program.
* Two integer variables num1 and num2 are declared to store the input numbers from the user.
* The printf() function is used to prompt the user to enter the first number, and the input is scanned and stored in num1 using the scanf() function.
* Similarly, the printf() function is used to prompt the user to enter the second number, and the input is scanned and stored in num2 using the scanf() function.
* The minimum of the two numbers is determined using the conditional operator (num1 < num2) ? num1 : num2. If num1 is less than num2, num1 is assigned to minimum; otherwise, num2 is assigned to minimum.
* The printf() function is used to display the minimum number as output.
* The return 0; statement indicates the successful execution of the program. By convention, a return value of 0 indicates that the program terminated without any errors.
### **Conclusion**
This program allows the user to input two numbers and uses the conditional operator to determine the minimum of the two numbers. The minimum number is then displayed as the output. The program provides a simple and efficient way to find the minimum of two numbers using the conditional operator, making it useful in scenarios where the comparison of values is required.


---
---
<br/>
<br/>

>## <span id="q5">5. WAP to display whether a number is even or odd using the conditional operator</span>
### **Introduction**
This program allows the user to input a number and uses the conditional operator (ternary operator) to determine whether the number is even or odd. The result is then displayed as output.
### **Code**

```c
#include <stdio.h>

int main()
{
    int number;
    char *result;
    // char result[10];

    printf("Enter a number: ");
    scanf("%d", &number);

    result = (number % 2 == 0) ? "even" : "odd";

    printf("The number is %s.\n", result);

    return 0;
}
```
### **Possible Output**
```
Enter a number: 7
The number is odd.
```
```
Enter a number: 12
The number is even.
```

### **Description**
* The program starts with the inclusion of the stdio.h header file, which allows the usage of input/output functions in the C program.
* An integer variable number is declared to store the input number from the user.
A character pointer variable result is declared to store the result (even or odd).
* The printf() function is used to prompt the user to enter a number, and the input is scanned and stored in number using the scanf() function.
* The result (even or odd) is determined using the conditional operator (number % 2 == 0) ? "even" : "odd". If the remainder of number divided by 2 is 0, the result is set to "even"; otherwise, it is set to "odd".
* The printf() function is used to display the result as output.
* The return 0; statement indicates the successful execution of the program. By convention, a return value of 0 indicates that the program terminated without any errors.
### **Conclusion**
This program allows the user to input a number and uses the conditional operator to determine whether the number is even or odd. The result (even or odd) is then displayed as output. The program provides a concise and efficient way to determine the parity of a number using the conditional operator, making it useful in scenarios where the classification of numbers is required.

---
---
<br/>
<br/>

>## <span id="q6">6. What are the output of the following programs:
</span>

### **Introduction**
This program demonstrates various bitwise operations performed on two integer variables a and b. It showcases the use of bitwise AND, OR, XOR, NOT, left shift, and right shift operations. The values of a and b are initialized to 5 and 9, respectively.
### **Code**

```c
#include <stdio.h>

int main()
{
    int a = 5, b = 9;
    printf("a = %d, b = %d\n", a, b);
    printf("a&b = %d\n", a & b);
    printf("a|b = %d\n", a | b);
    printf("a^b = %d\n", a ^ b);
    printf("~a = %d\n", ~a);
    printf("(b<<2)+(a<<1) = %d\n", (b << 2) + (a << 1));
    printf("(b>>1)+(a>>1) = %d\n", (b >> 1) + (a >> 1));
    return 0;
}
```
### **Possible Output**
```
a = 5, b = 9
a&b = 1
a|b = 13
a^b = 12
~a = -6
(b<<2)+(a<<1) = 38
(b>>1)+(a>>1) = 6
```

### **Description**
* The program starts with the inclusion of the stdio.h header file, which allows the usage of input/output functions in the C program.
* Two integer variables a and b are declared and initialized to 5 and 9, respectively.
* The printf() function is used to display the values of a and b.
* The bitwise AND operation between a and b is performed using the & operator, and the result is displayed using the printf() function.
Similarly, the bitwise OR operation between a and b is performed using the | operator, and the result is displayed.
* The bitwise XOR operation between a and b is performed using the ^ operator, and the result is displayed.
* The bitwise NOT operation on a is performed using the ~ operator, and the result is displayed.
* The left shift operation is performed on b by 2 bits (b << 2) and on a by 1 bit (a << 1). The shifted values are added together, and the result is displayed.
* The right shift operation is performed on b by 1 bit (b >> 1) and on a by 1 bit (a >> 1). The shifted values are added together, and the result is displayed.
* The return 0; statement indicates the successful execution of the program. By convention, a return value of 0 indicates that the program terminated without any errors.
  
### **More on Bitwise Operators**
Bitwise operators in C are used to manipulate individual bits of data. They perform operations on the binary representation of integers at the bit level. This article provides a detailed explanation of the commonly used bitwise operators in C, presented in simple language for beginners.
1. AND Operator (&)
    * Performs a bitwise AND operation between two operands by comparing the corresponding bits of the operands.
    * The result has a 1 in each bit position where both operands have a 1, otherwise, it has a 0.
    * Used to mask or extract specific bits from a number by combining it with a bit mask.
    * Commonly used for bitwise operations such as checking if a specific bit is set.
2. OR Operator (|)
    * Performs a bitwise OR operation between two operands by comparing the corresponding bits of the operands.
    * The result has a 1 in each bit position where at least one of the corresponding bits is set to 1.
    * Used to set specific bits in a number by combining it with a bit mask.
    * Commonly used for bitwise operations such as combining multiple flags or options.
3. XOR Operator (^)
    * Performs a bitwise XOR (exclusive OR) operation between two operands by comparing the corresponding bits of the operands.
    * The result has a 1 in each bit position where the corresponding bits of the operands are different, otherwise, it has a 0.
    * Used to toggle specific bits in a number by combining it with a bit mask.
    * Commonly used for bitwise operations such as flipping the state of a flag or option.
4. NOT Operator (~)
    * Performs a bitwise NOT operation on a single operand by inverting all its bits.
    * Changes each 0 to 1 and each 1 to 0.
    * Used to reverse the bits of a number or to create the one's complement of a binary value.
    * Commonly used for bitwise operations such as inverting the state of all bits in a number.
5. Left Shift Operator (<<)
    * Shifts the bits of the left-hand operand to the left by a specified number of positions.
    * The empty bits on the right side are filled with 0.
    * Equivalent to multiplying the number by 2 raised to the power of the shift amount.
    * Commonly used for bitwise operations such as multiplying or dividing a number by powers of 2.
6. Right Shift Operator (>>)
    * Shifts the bits of the left-hand operand to the right by a specified number of positions.
    * The empty bits on the left side are filled based on the sign bit (for signed integers) or with 0 (for unsigned integers).
    * Equivalent to dividing the number by 2 raised to the power of the shift amount.
    * Commonly used for bitwise operations such as extracting or dividing a number by powers of 2.
### **Conclusion**
This program demonstrates the usage of bitwise operations such as AND, OR, XOR, NOT, left shift, and right shift on two integer variables a and b. The program showcases how these operations can be used to manipulate the individual bits of the variables and perform various operations based on bitwise manipulation. The output displays the results of each operation, providing insights into the behavior of these bitwise operators in C programming.
