# LAB SHEET NO.3 [To be familiar with selective structure (branching)]
This lab sheet is a part of the Computer Programming course for Bachelor's in Computer Engineering at Tribhuvan University. It focuses on introducing the basics of C programming. In this sheet, you will find a set of questions related to C programming concepts. Each question includes a title, introduction, code, possible outputs, description, and a conclusion.

## Table of Contents
1. [WAP to check whether a number is negative, positive or zero.](#q1)
2. [WAP to find maximum between three numbers entered by the user.](#q2)
3. [WAP to input a character from the user and check whether the character is vowel or consonant.](#q3)
4. [WAP to input a character from the user and check whether the character is Alphabet or not. If the character is Alphabet then show whether it is uppercase or lowercase.](#q4)
5. [WAP to check whether the year entered by the user is leap year or not.](#q5)
6. [WAP to check whether the number entered by the user is divisible by 5 and 11 or not.](#q6)
7. [WAP to find the all the roots of a quadratic equation.](#q7)
8. [WAP to input two numbers and operator among [ + , - ,* , / ]. If user enters + then the program should perform the addition of the number and display the sum. If user enters – then the program should perform subtraction of number and display the difference and so on for * and /.](#q8)
9.  [WAP in C to input marks of five subjects C-programming, Physics, Maths, Applied Mechanics and Basic electrical. Display whether the student passed or failed. Take F.M=100 and P.M.=40 For passed students calculate percentage and grade according to following:Percentage >= 90% : A Percentage >=80% : B Percentage >= 70% : C Percentage >= 60% : D Percentage >= 40% : E](#q9)
10. [WAP to input a number from user. If user enters a number less than or equal to zero then program should just display the number. If user enters 1 the program should display output as neither prime nor composite, if user enters 2 the program should display output as smallest and only even prime number. If user enters any number greater than 2 the program should check whether the number is prime or not, also if the number is not prime the program should display whether it is even or odd.](#q10)
    
---
---

## See Also
* [Lab Sheet 3.docx](./lab-sheet-3.docx)
* [Lab Sheet 3.pdf](./lab-sheet-3.pdf)


---
---
<br/>
<br/>

>## <span id="q1">1. WAP to check whether a number is negative, positive or zero.
</span>

### **Introduction**
This program allows the user to input a number and determines whether the number is negative, positive, or zero. It utilizes conditional statements (if, else if, and else) to perform the check and provide the corresponding output message.

### **Code**

```c
// [Desc: Program to check whether a number is positive or negative.]
#include <stdio.h>

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number > 0)
        printf("The number is positive.\n");
    else if (number < 0)
        printf("The number is negative.\n");
    else
        printf("The number is zero.\n");

    return 0;
}
```

### **Possible Output**
```
Enter a number: 5
The number is positive.
```
```
Enter a number: -7
The number is negative.
```
```
Enter a number: 0
The number is zero.
```

### **Description**
* The program begins by declaring a variable number to store the user input.
* The user is prompted to enter a number using the printf() function.
* The scanf() function is used to read the user input and store it in the number variable.
* The program then uses conditional statements (if, else if, and else) to check the value of number.
* If number is greater than 0, the program prints "The number is positive." using the printf() function.
* If number is less than 0, the program prints "The number is negative." using the printf() function.
* If number is neither greater than 0 nor less than 0 (i.e., it is equal to 0), the program prints "The number is zero." using the printf() function.
* Finally, the program returns 0 to indicate successful execution.
### **Conclusion**
This program allows the user to input a number and determines whether it is negative, positive, or zero. It demonstrates the use of conditional statements to perform different actions based on the value of a variable. The output message indicates the nature of the entered number.


---
---
<br/>
<br/>

>## <span id="q2">2. WAP to find maximum between three numbers entered by the user.</span>

### **Introduction**
This program allows the user to input three numbers and finds the maximum among them. It uses conditional statements (if, else if, and else) to compare the numbers and determine the maximum value.

### **Code**

```c
// [Desc: Program to find the maximum of three numbers.]
#include <stdio.h>

int main()
{
    int num1, num2, num3, max;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if (num1 > num2 && num1 > num3)
        max = num1;
    else if (num2 > num1 && num2 > num3)
        max = num2;
    else
        max = num3;

    printf("The maximum number is: %d\n", max);

    return 0;
}
```

### **Possible Output**
```
Enter three numbers: 3 5 7
The maximum number is: 7
```
```
Enter three numbers: 9 6 2
The maximum number is: 9
```
```
Enter three numbers: 4 8 2
The maximum number is: 8
```

### **Description**
* The program declares four variables: num1, num2, num3, and max.
* The user is prompted to enter three numbers using the printf() function.
* The scanf() function is used to read the three numbers and store them in the respective variables.
* The program then uses conditional statements (if, else if, and else) to compare the numbers and determine the maximum value.
* If num1 is greater than both num2 and num3, it is assigned to max.
* If num2 is greater than both num1 and num3, it is assigned to max.
* If neither of the above conditions is true, it means that num3 is the greatest, and it is assigned to max.
* Finally, the program prints the maximum number using the printf() function.
### **Conclusion**
This program allows the user to input three numbers and finds the maximum among them. It demonstrates the use of conditional statements to compare values and determine the maximum. The output displays the maximum number among the three entered numbers.


---
---
<br/>
<br/>

>## <span id="q3">3. WAP to input a character from the user and check whether the character is vowel or consonant.</span>

### **Introduction**
This program allows the user to input a character and determines whether the character is a vowel or a consonant. It uses conditional statements (if and else) to check if the character matches any of the vowel characters.

### **Code**

```c
// [Desc: Program to check whether a character is a vowel or a consonant.]
#include <stdio.h>

int main()
{
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    {
        printf("The character is a vowel.\n");
    }
    else
    {
        printf("The character is a consonant.\n");
    }

    return 0;
}
```

### **Possible Output**
```
Enter a character: a
The character is a vowel.
```
```
Enter a character: b
The character is a consonant.
```

### **Description**
* The program declares a character variable ch.
* The user is prompted to enter a character using the printf() function.
* The scanf() function is used to read the character and store it in the variable ch.
* The program then uses conditional statements (if and else) to check if the character matches any of the vowel characters.
* If the character matches any of the vowel characters (both lowercase and uppercase), the program prints that the character is a vowel using the printf() function.
### **Conclusion**
This program allows the user to input a character and determines whether the character is a vowel or a consonant. It uses conditional statements to compare the character with vowel characters and makes the determination. The output displays whether the entered character is a vowel or a consonant.

---
---
<br/>
<br/>

>## <span id="q4">4. WAP to input a character from the user and check whether the character is Alphabet or not. If the character is Alphabet then show whether it is uppercase or lowercase.</span>

### **Introduction**
This program allows the user to input a character and checks whether the character is an alphabet or not. If the character is an alphabet, it further determines whether it is in uppercase or lowercase. It uses conditional statements (if and else) to perform the checks and prints the corresponding output

### **Code**

```c
// [Desc: Program to check whether a character is an alphabet or not.]
#include <stdio.h>

int main()
{
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    if ((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122))
    {
        printf("The character is an alphabet.\n");

        if (ch >= 65 && ch <= 90)
            printf("It is in uppercase.\n");
        else
            printf("It is in lowercase.\n");
    }
    else
    {
        printf("The character is not an alphabet.\n");
    }

    return 0;
}
```

### **Possible Output**
```
Enter a character: B
The character is an alphabet.
It is in uppercase.
```
```
Enter a character: z
The character is an alphabet.
It is in lowercase.
```
```
Enter a character: 5
The character is not an alphabet.
```

### **Description**
* The program declares a character variable ch.
* The user is prompted to enter a character using the printf() function.
* The scanf() function is used to read the character and store it in the variable ch.
* The program then uses conditional statements (if and else) to check if the character falls within the ASCII range of uppercase alphabets (65 to 90) or lowercase alphabets (97 to 122).
* If the character falls within the ASCII range of alphabets, the program prints that the character is an alphabet using the printf() function.
* Based on the ASCII range, the program further checks whether the character is in uppercase or lowercase and prints the corresponding output using the printf() function.
* If the character does not fall within the ASCII range of alphabets, it is considered a non-alphabetic character, and the program prints that the character is not an alphabet using the printf() function.

### **Conclusion**
This program allows the user to input a character and checks whether the character is an alphabet or not. If it is an alphabet, the program determines whether it is in uppercase or lowercase. The output displays whether the entered character is an alphabet, along with its case if applicable. If the character is not an alphabet, the program indicates that as well.


---
---
<br/>
<br/>

>## <span id="q5">5. WAP to check whether the year entered by the user is leap year or not.</span>

### **Introduction**
This program allows the user to input a year and checks whether the year is a leap year or not. It uses conditional statements (if and else) to perform the necessary checks based on the rules of leap years.

### **Code**

```c
// [Desc: Program to check whether a year is a leap year or not.]
#include <stdio.h>

int main() {
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    if (year % 4 == 0) {
        if (year % 100 == 0){
            if (year % 400 == 0){
                printf("%d is a leap year.\n", year);
            } else {
                printf("%d is not a leap year.\n", year);
            }
        } else {
            printf("%d is a leap year.\n", year);
        }
    } else {
        printf("%d is not a leap year.\n", year);
    }

    return 0;
}
```

### **Possible Output**
```
Enter a year: 2020
2020 is a leap year.
```
```
Enter a year: 2021
2021 is not a leap year.
```

### **Description**
* The program declares an integer variable year.
* The user is prompted to enter a year using the printf() function.
* The scanf() function is used to read the year and store it in the variable year.
* The program then uses conditional statements (if and else) to check whether the year is divisible by 4.
* If the year is divisible by 4, the program proceeds to check whether it is divisible by 100 as well.
* If the year is divisible by 100, the program further checks whether it is divisible by 400.
* If the year is divisible by 400, it is considered a leap year and the program prints that using the printf() function.
* If the year is divisible by 100 but not by 400, it is not a leap year and the program prints that.
* If the year is divisible by 4 but not by 100, it is a leap year and the program prints that.
* If the year is not divisible by 4, it is not a leap year and the program prints that.
* The program uses appropriate printf() statements to display the result based on the checks performed.
### **Conclusion**
This program allows the user to input a year and checks whether the year is a leap year or not. It follows the rules of leap years and uses conditional statements to perform the necessary checks. The output indicates whether the entered year is a leap year or not.


---
---
<br/>
<br/>

>## <span id="q6">6. WAP to check whether the number entered by the user is divisible by 5 and 11 or not.</span>

### **Introduction**
This program allows the user to input a number and checks whether the number is divisible by both 5 and 11. It uses the modulus operator % to determine the remainder when the number is divided by 5 and 11. If the remainder is 0 for both divisions, then the number is divisible by both 5 and 11.

### **Code**

```c
// [Desc: Program to check whether a number is divisible by 5 and 11.]
#include <stdio.h>

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number % 5 == 0 && number % 11 == 0)
    {
        printf("%d is divisible by 5 and 11.\n", number);
    }
    else
    {
        printf("%d is not divisible by 5 and 11.\n", number);
    }

    return 0;
}
```

### **Possible Output**
```
Enter a number: 55
55 is divisible by 5 and 11.
```
```
Enter a number: 25
25 is not divisible by 5 and 11.
```

### **Description**
* The program declares an integer variable number.
* The user is prompted to enter a number using the printf() function.
* The scanf() function is used to read the number and store it in the variable number.
* The program uses the conditional statement if to check whether the number is divisible by both 5 and 11.
* The condition (number % 5 == 0 && number % 11 == 0) checks whether the remainder of the number divided by 5 and 11 is 0.
* If the condition is true, the program prints that the number is divisible by 5 and 11 using the printf() function.
* If the condition is false, the program prints that the number is not divisible by 5 and 11.
* The program uses appropriate printf() statements to display the result based on the divisibility checks.
### **Conclusion**
This program allows the user to input a number and checks whether the number is divisible by both 5 and 11. It uses the modulus operator % to determine the remainder and performs the necessary checks using the conditional statement if. The output indicates whether the entered number is divisible by both 5 and 11 or not.


---
---
<br/>
<br/>

>## <span id="q7">7. WAP to find the all the roots of a quadratic equation</span>

### **Introduction**
This program allows the user to input the coefficients of a quadratic equation (a, b, c) and calculates the roots of the equation. It uses the quadratic formula and considers different cases based on the discriminant to determine the nature of the roots.


### **Code**

```c
// [Desc: Program to find the roots of a quadratic equation.]
#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c;
    double discriminant, root1, root2, realPart, imaginaryPart;

    printf("Enter the coefficients of the quadratic equation (a, b, c): ");
    scanf("%lf %lf %lf", &a, &b, &c);

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0)
    {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are real and different:\n");
        printf("Root 1 = %.2lf\n", root1);
        printf("Root 2 = %.2lf\n", root2);
    }
    else if (discriminant == 0)
    {
        root1 = -b / (2 * a);
        printf("Roots are real and same:\n");
        printf("Root = %.2lf\n", root1);
    }
    else
    {
        realPart = -b / (2 * a);
        imaginaryPart = sqrt(-discriminant) / (2 * a);
        printf("Roots are complex and different:\n");
        printf("Root 1 = %.2lf + %.2lfi\n", realPart, imaginaryPart);
        printf("Root 2 = %.2lf - %.2lfi\n", realPart, imaginaryPart);
    }

    return 0;
}
```

### **Possible Output**
```
Enter the coefficients of the quadratic equation (a, b, c): 2 -7 3
Roots are real and different:
Root 1 = 3.00
Root 2 = 0.50
```
```
Enter the coefficients of the quadratic equation (a, b, c): 1 -4 4
Roots are real and same:
Root = 2.00
```
```
Enter the coefficients of the quadratic equation (a, b, c): 1 2 5
Roots are complex and different:
Root 1 = -1.00 + 2.00i
Root 2 = -1.00 - 2.00i
```

### **Description**
* The program declares variables a, b, and c to store the coefficients of the quadratic equation, and variables discriminant, root1, root2, realPart, and imaginaryPart to store intermediate and final values.
* The user is prompted to enter the coefficients of the quadratic equation using the printf() function.
* The scanf() function is used to read the coefficients and store them in the respective variables.
* The discriminant of the quadratic equation is calculated using the formula discriminant = b * b - 4 * a * c.
* The program uses conditional statements if, else if, and else to determine the nature of the roots based on the value of the discriminant.
* If the discriminant is greater than 0, the program calculates the two real and different roots using the quadratic formula and displays them.
* If the discriminant is equal to 0, the program calculates the real and same root and displays it.
* If the discriminant is less than 0, indicating complex roots, the program calculates the real and imaginary parts of the roots and displays them.
* The program uses appropriate printf() statements to display the nature and values of the roots based on the calculations.
### **Conclusion**
This program allows the user to input the coefficients of a quadratic equation and calculates the roots of the equation based on the nature of the roots (real and different, real and same, or complex). It uses the quadratic formula and conditional statements to perform the necessary calculations and displays the roots using appropriate printf() statements. The output provides information about the nature and values of the roots of the quadratic equation.


---
---
<br/>
<br/>

>## <span id="q8">8. WAP to input two numbers and operator among [ + , - ,* , / ]. If user enters + then the program should perform the addition of the number and display the sum. If user enters – then the program should perform subtraction of number and display the difference and so on for * and /.
</span>

### **Introduction**
This program acts as a simple calculator that allows the user to input two numbers and an operator (+, -, *, /). Based on the operator entered, the program performs the corresponding arithmetic operation and displays the result.

### **Code**

```c
// [Desc: Program to make a simple calculator.]
#include <stdio.h>

int main()
{
    double num1, num2, result;
    char operator;

    printf("Enter the first number: ");
    scanf("%lf", &num1);

    printf("Enter the second number: ");
    scanf("%lf", &num2);

    printf("Enter the operator (+, -, *, /): ");
    scanf(" %c", &operator);

    switch (operator)
    {
    case '+':
        result = num1 + num2;
        printf("Result: %.2lf\n", result);
        break;
    case '-':
        result = num1 - num2;
        printf("Result: %.2lf\n", result);
        break;
    case '*':
        result = num1 * num2;
        printf("Result: %.2lf\n", result);
        break;
    case '/':
        if (num2 != 0)
        {
            result = num1 / num2;
            printf("Result: %.2lf\n", result);
        }
        else
        {
            printf("Error: Division by zero is not allowed.\n");
        }
        break;
    default:
        printf("Error: Invalid operator.\n");
    }

    return 0;
}
```

### **Possible Output**
```
Enter the first number: 5
Enter the second number: 3
Enter the operator (+, -, *, /): +
Result: 8.00
```
```
Enter the first number: 10
Enter the second number: 4
Enter the operator (+, -, *, /): -
Result: 6.00
```
```
Enter the first number: 7
Enter the second number: 2
Enter the operator (+, -, *, /): *
Result: 14.00
```
```
Enter the first number: 12
Enter the second number: 4
Enter the operator (+, -, *, /): /
Result: 3.00
```
```
Enter the first number: 8
Enter the second number: 0
Enter the operator (+, -, *, /): /
Error: Division by zero is not allowed.
```
```
Enter the first number: 3
Enter the second number: 2
Enter the operator (+, -, *, /): %
Error: Invalid operator.
```

### **Description**
* The program declares variables num1, num2, and result to store the input numbers and the calculated result, respectively.
* The program also declares a variable operator of type char to store the input operator.
* The user is prompted to enter the first number using the printf() function, and the input is read and stored using the scanf() function.
* The user is prompted to enter the second number in a similar manner.
* The user is prompted to enter the operator using the printf() function, and the input is read and stored. Note the space before the %c in the scanf() function to skip any leading whitespace characters.
* The program uses a switch statement to perform the appropriate arithmetic operation based on the operator entered.
* If the operator is '+', the program performs addition and stores the result in the result variable.
* If the operator is '-', the program performs subtraction and stores the result.
* If the operator is '*', the program performs multiplication and stores the result.
* If the operator is '/', the program checks if the second number is not zero to avoid division by zero. If it's not zero, division is performed and the result is stored.
* If the operator is none of the above, an invalid operator error message is displayed.
* The program uses the printf() function to display the result or error message.
### **Conclusion**
This program allows the user to perform basic arithmetic operations (+, -, *, /) on two input numbers. It utilizes a switch statement to determine the appropriate operation based on the operator entered. The program performs the calculation and displays the result or error message, depending on the user's input.


---
---
<br/>
<br/>

>## <span id="q9">9. WAP in C to input marks of five subjects C-programming, Physics, Maths, Applied Mechanics and Basic electrical. Display whether the student passed or failed. Take F.M=100 and P.M.=40 For passed students calculate percentage and grade according to following:Percentage >= 90% : A Percentage >=80% : B Percentage >= 70% : C Percentage >= 60% : D Percentage >= 40% : E</span>

### **Introduction**
This program allows the user to input marks for five subjects: C Programming, Physics, Maths, Applied Mechanics, and Basic Electrical. It then calculates the total marks obtained, the percentage, and assigns a grade based on the percentage. The program also determines whether the student passed or failed based on the passing marks criteria.

### **Code**

```c
// [Desc: Program to calculate the grade of a student.]
#include <stdio.h>

int main()
{
    float cProgramming, physics, maths, appliedMechanics, basicElectrical;
    float FM = 100.0; // Full Marks
    float PM = 40.0;  // Passing Marks
    float totalMarksObtained, percentage;
    char grade;

    // Input marks for each subject
    printf("Enter marks for C Programming, Physics, Maths, Applied Mechanics, and Basic Electrical: ");
    scanf("%f%f%f%f%f", &cProgramming, &physics, &maths, &appliedMechanics, &basicElectrical);

    // Calculate total marks obtained
    totalMarksObtained = cProgramming + physics + maths + appliedMechanics + basicElectrical;

    // Check if any subject marks exceed full marks
    if (cProgramming > FM || physics > FM || maths > FM || appliedMechanics > FM || basicElectrical > FM)
    {
        printf("Error: Marks cannot be greater than 100.\n");
    }
    // Check if any subject marks are below passing marks
    else if (cProgramming < PM || physics < PM || maths < PM || appliedMechanics < PM || basicElectrical < PM)
    {
        // Student failed
        printf("Sorry, you have failed.\n");
    }
    else
    {
        // Calculate percentage
        percentage = (totalMarksObtained / (FM * 5.0)) * 100.0;

        // Assign grade based on percentage
        if (percentage >= 90.0)
        {
            grade = 'A';
        }
        else if (percentage >= 80.0)
        {
            grade = 'B';
        }
        else if (percentage >= 70.0)
        {
            grade = 'C';
        }
        else if (percentage >= 60.0)
        {
            grade = 'D';
        }
        else if (percentage >= 40.0)
        {
            grade = 'E';
        }
        // Display result
        printf("Congratulations! You have passed.\n");
        printf("Percentage: %.2f%%\n", percentage);
        printf("Grade: %c\n", grade);
    }

    return 0;
}
```

### **Possible Output**
```
Enter marks for C Programming, Physics, Maths, Applied Mechanics, and Basic Electrical: 55 65 70 60 35
Sorry, you have failed.
```
```
Enter marks for C Programming, Physics, Maths, Applied Mechanics, and Basic Electrical: 80 75 85 90 70
Congratulations! You have passed.
Percentage: 80.00%
Grade: B
```

### **Description**
* The program declares variables to store the marks for each subject: cProgramming, physics, maths, appliedMechanics, and basicElectrical.
* The program also declares variables for the full marks (FM), passing marks (PM), total marks obtained, percentage, and grade.
* The user is prompted to enter the marks for each subject using the printf() function, and the values are stored using the scanf() function.
* The program calculates the total marks obtained by adding the marks for all subjects together.
* The program then checks if any subject marks exceed the full marks. If any subject marks are greater than FM, it displays an error message.
* Next, the program checks if any subject marks are below the passing marks (PM). If any subject marks are below PM, it displays a failure message.
* If the student has not failed, the program calculates the percentage by dividing the total marks obtained by the product of full marks and the number of subjects.
* Based on the percentage, the program assigns a grade using if and else if statements.
* Finally, the program displays a success message, the calculated percentage, and the assigned grade using the printf() function.
### **Conclusion**
This program allows the user to input marks for five subjects and calculates the total marks obtained, percentage, and grade. It checks if any subject marks exceed the full marks or are below the passing marks. If the student has not failed, it assigns a grade based on the percentage and displays the result.


---
---
<br/>
<br/>

>## <span id="q10">10. WAP to input a number from user. If user enters a number less than or equal to zero then program should just display the number. If user enters 1 the program should display output as neither prime nor composite, if user enters 2 the program should display output as smallest and only even prime number. If user enters any number greater than 2 the program should check whether the number is prime or not, also if the number is not prime the program should display whether it is even or odd</span>

### **Introduction**
This program allows the user to input a number and checks whether the number is prime or not. It also provides additional information if the number is not prime, such as whether it is even or odd. The program handles different scenarios based on the input number.

### **Code**

```c
// [Desc: Program to check if a number is prime or not.]
#include <stdio.h>

int main()
{
    int number, isPrime = 1;

    // Input a number from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    if (number <= 0)
    {
        // Number is less than or equal to zero
        printf("Number: %d\n", number);
    }
    else if (number == 1)
    {
        // Number is 1
        printf("Neither prime nor composite\n");
    }
    else if (number == 2)
    {
        // Number is 2, the smallest and only even prime number
        printf("Smallest and only even prime number\n");
    }
    else
    {
        // Number is greater than 2
        for (int i = 2; i <= number / 2; i++)
        {
            if (number % i == 0)
            {
                // Number is not prime
                isPrime = 0;
                break;
            }
        }

        if (isPrime)
        {
            // Number is prime
            printf("Number is prime\n");
        }
        else
        {
            // Number is not prime
            printf("Number is not prime\n");

            if (number % 2 == 0)
            {
                // Number is even
                printf("Number is even\n");
            }
            else
            {
                // Number is odd
                printf("Number is odd\n");
            }
        }
    }

    return 0;
}
```

### **Possible Output**
```
Enter a number: 0
Number: 0
```
```
Enter a number: 1
Neither prime nor composite
```
```
Enter a number: 2
Smallest and only even prime number```
```
```
Enter a number: 17
Number is prime
```
```
Enter a number: 12
Number is not prime
Number is even
```
```
Enter a number: 27
Number is not prime
Number is odd
```

### **Description**
* The program declares variables to store the input number (number) and a flag to track whether the number is prime (isPrime).
* The user is prompted to enter a number using the printf() function, and the value is stored using the scanf() function.
* The program then checks different scenarios based on the input number:
* If the number is less than or equal to zero, it displays the number itself.
* If the number is 1, it displays "Neither prime nor composite" because 1 is neither prime nor composite.
* If the number is 2, it displays "Smallest and only even prime number" because 2 is the smallest and only even prime number.
* For any number greater than 2, the program checks if it is prime by iterating from 2 to half of the number and checking if any number divides the input number evenly.
* If the number is divisible by any number, it sets the isPrime flag to 0, indicating that the number is not prime.
* If no number divides the input number evenly, the isPrime flag remains 1, indicating that the number is prime.
* If the number is prime, it displays "Number is prime."
* If the number is not prime, it displays "Number is not prime" and further checks if the number is even or odd by checking the remainder of dividing the number by 2.
* If the remainder is 0, it displays "Number is even."
* If the remainder is not 0, it displays "Number is odd."
* The program ends with the return 0; statement.

### **Conclusion**
This program allows the user to input a number and determines whether it is prime or not. It handles different scenarios and provides appropriate output based on the input number.



---
---
