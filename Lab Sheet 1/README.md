# LAB SHEET NO. 1 [To be familiar with C- Programming]

This lab sheet is a part of the Computer Programming course for Bachelor's in Computer Engineering at Tribhuvan University. It focuses on introducing the basics of C programming. In this sheet, you will find a set of questions related to C programming concepts. Each question includes a title, introduction, code, possible outputs, description, and a conclusion.

## Table of Contents

1. [Question 1: WAP to display hello world](#q1)
2. [Question 2: WAP to display your name, roll number, and address](#q2)
3. [Question 3: WAP to add two integer variables and print sum](#q3)
4. [Question 4: WAP to multiply two integer variables and print product](#q4)
5. [Question 5: WAP to calculate and display the simple interest](#q5)
6. [Question 6: WAP to calculate the area of the circle](#q6)

---
---

## See Also
* [Lab Sheet 1.docx](./lab-sheet-1.docx)
* [Lab Sheet 1.pdf](./lab-sheet-1.pdf)

---
---
<br/>
<br/>

>## <span id="q1">1. WAP to display "Hello, World!" in C</span>


### **Introduction**
This program demonstrates how to display the message "Hello, World!" on the screen using the C programming language.

### **Code**

```c
// [Desc: Hello World program in C]
#include <stdio.h>

int main()
{
    printf("Hello, World!\n");
    return 0;
}
```
### **Possible Output**

```
Hello, World!
```

### **Description**
* The program starts with the inclusion of the stdio.h header file, which allows the usage of input/output functions in the C program.

* The main() function is the entry point of the program, and the execution of the program begins from here.

* Inside the main() function, the printf() function is used to display the "Hello, World!" message on the screen. The message is enclosed in double quotation marks within the parentheses of the printf() function.

* The \n character represents a newline, which moves the cursor to the next line after displaying the message.

* The return 0; statement indicates the successful execution of the program. By convention, a return value of 0 indicates that the program terminated without any errors.

### **Conclusion**
The "Hello, World!" program is a basic and fundamental program in any programming language. It serves as a starting point for learning and practicing programming concepts. In this C program, the message "Hello, World!" is displayed using the printf() function, and a newline character ensures that the output appears on a new line.

---
---
<br/>
<br/>

>## <span id="q2"> 2. WAP to display your name, roll number, and address in C </span>

### **Introduction**
This program displays your name, roll number, and address using the C programming language.
### **Code**

```c
// [Desc: Print name, roll number, and address]
#include <stdio.h>

int main()
{
    printf("Name: Tilak Thapa\n");
    printf("Roll Number: PUR079BCT094\n");
    printf("Address: Tulsipur - 4, Dang\n");
    return 0;
}

```
### **Possible Output**

```
Name: Tilak Thapa
Roll Number: PUR079BCT094
Address: Tulsipur - 4, Dang
```

### **Description**
* The program starts with the inclusion of the stdio.h header file, which allows the usage of input/output functions in the C program.

* The main() function is the entry point of the program, and the execution of the program begins from here.

* Inside the main() function, the printf() function is used to display the name, roll number, and address.

* Each line of the output is printed using separate printf() statements. The \n character represents a newline, which moves the cursor to the next line after displaying the message.

* The return 0; statement indicates the successful execution of the program. By convention, a return value of 0 indicates that the program terminated without any errors.

### **Conclusion**
This program demonstrates how to display your name, roll number, and address using the printf() function in C. It serves as a basic example of printing multiple lines of text on the screen. By modifying the values inside the printf() statements, you can personalize the output to display your own information.

---
---
<br/>
<br/>

>## <span id="q3"> 3. WAP to add two integer variables and print the sum in C </span>

### **Introduction**
This program calculates the sum of two integer variables and prints the result using the C programming language.

### **Code**
```c
// [Desc: Sum of two numbers]
#include <stdio.h>

int main()
{
    int num1 = 10;
    int num2 = 20;
    int sum = num1 + num2;
    printf("Sum: %d\n", sum);
    return 0;
}
```

### **Possible Output**
```
Sum: 30
```

### **Description**
* The program starts with the inclusion of the stdio.h header file, which allows the usage of input/output functions in the C program.

* The main() function is the entry point of the program, and the execution of the program begins from here.

* Inside the main() function, three variables are declared: num1, num2, and sum. num1 is initialized with the value 10, num2 is initialized with the value 20, and sum is calculated by adding num1 and num2.

* The printf() function is used to display the value of sum on the screen. The %d format specifier is used to indicate that an integer value should be printed.

* The \n character represents a newline, which moves the cursor to the next line after displaying the message.

* The return 0; statement indicates the successful execution of the program. By convention, a return value of 0 indicates that the program terminated without any errors.

### **Conclusion**
This program demonstrates how to add two integer variables and print the sum using the printf() function in C. It showcases the basic arithmetic operation of addition and highlights the use of variables to store and manipulate data. In this example, the values 10 and 20 are added together, resulting in a sum of 30, which is then printed on the screen.

---
---
<br/>
<br/>

>## <span id="q4"> 4. WAP to multiply two integer variables and print the product in C </span>

### **Introduction**
This program calculates the product of two integer variables and prints the result using the C programming language.

### **Code**
```c
// [Desc: Product of two numbers]
#include <stdio.h>

int main()
{
    int num1 = 5;
    int num2 = 6;
    int product = num1 * num2;
    printf("Product: %d\n", product);
    return 0;
}
```

### **Possible Output**
```
Product: 30
```

##  **Description**
* The program starts with the inclusion of the stdio.h header file, which allows the usage of input/output functions in the C program.

* The main() function is the entry point of the program, and the execution of the program begins from here.

* Inside the main() function, three variables are declared: num1, num2, and product. num1 is initialized with the value 5, num2 is initialized with the value 6, and product is calculated by multiplying num1 and num2.

* The printf() function is used to display the value of product on the screen. The %d format specifier is used to indicate that an integer value should be printed.

* The \n character represents a newline, which moves the cursor to the next line after displaying the message.

* The return 0; statement indicates the successful execution of the program. By convention, a return value of 0 indicates that the program terminated without any errors.

### **Conclusion**
This program demonstrates how to multiply two integer variables and print the product using the printf() function in C. It showcases the basic arithmetic operation of multiplication and highlights the use of variables to store and manipulate data. In this example, the values 5 and 6 are multiplied together, resulting in a product of 30, which is then printed on the screen.

---
---
<br/>
<br/>

>## <span id = "q5"> 5. WAP to calculate and display the simple interest in C </span>

### **Introduction**
This program calculates and displays the simple interest using the C programming language.

### **Code**
```c
// [Desc: Simple Interest]
#include <stdio.h>

int main()
{
    float principle = 1000;
    float rate = 5.5;
    float time = 2.5;
    float interest = (principle * rate * time) / 100;
    printf("Simple Interest: Rs %f\n", interest);
    return 0;
}
```

### **Possible Output**
```
Simple Interest: Rs 137.500000
```

### **Description**
* The program starts with the inclusion of the stdio.h header file, which allows the usage of input/output functions in the C program.

* The main() function is the entry point of the program, and the execution of the program begins from here.

* Inside the main() function, four variables are declared: principle, rate, time, and interest. principle represents the principal amount, rate represents the interest rate, time represents the time period, and interest is calculated using the formula (principle * rate * time) / 100.

* The printf() function is used to display the value of interest on the screen. The %f format specifier is used to indicate that a floating-point value should be printed.

* The \n character represents a newline, which moves the cursor to the next line after displaying the message.

* The return 0; statement indicates the successful execution of the program. By convention, a return value of 0 indicates that the program terminated without any errors.

### **Conclusion**
This program demonstrates how to calculate and display the simple interest using the printf() function in C. It showcases the basic formula for calculating simple interest, which involves the principal amount, interest rate, and time period. In this example, a principal amount of Rs 1000, an interest rate of 5.5%, and a time period of 2.5 years are used to calculate the simple interest, resulting in Rs 137.50 being displayed on the screen.

---
---
<br/>
<br/>

>## <span id="q6"> 6. WAP to calculate the area of a circle in C </span>
### **Introduction**
This program calculates the area of a circle using the C programming language.

### **Code**
```c
// [Desc: Area of a circle]
#include <stdio.h>

int main()
{
    const float PI = 3.14159;
    float radius = 2.5;
    float area = PI * radius * radius;
    printf("Area of the circle: %.2f sq unit.\n", area);
    return 0;
}
```

### **Possible Output**
```
Area of the circle: 19.63 sq unit.
```

### **Description**
* The program starts with the inclusion of the stdio.h header file, which allows the usage of input/output functions in the C program.

* The main() function is the entry point of the program, and the execution of the program begins from here.

* Inside the main() function, three variables are declared: PI, radius, and area. PI is a constant variable with a value of 3.14159, radius represents the radius of the circle, and area is calculated using the formula PI * radius * radius.

* The printf() function is used to display the value of area on the screen. The %.2f format specifier is used to indicate that a floating-point value should be printed with two decimal places.

* The \n character represents a newline, which moves the cursor to the next line after displaying the message.

* The return 0; statement indicates the successful execution of the program. By convention, a return value of 0 indicates that the program terminated without any errors.

### **Conclusion**
This program demonstrates how to calculate the area of a circle using the printf() function in C. It showcases the basic formula for calculating the area of a circle, which involves the radius and the constant value of PI. In this example, a radius of 2.5 units is used to calculate the area of the circle, resulting in an area of 19.63 square units being displayed on the screen.

---
---
<br/>
<br/>