# LAB SHEET NO. 5 [To be familiar with LOOPS]

This lab sheet is a part of the Computer Programming course for Bachelor's in Computer Engineering at Tribhuvan University. It focuses on introducing the basics of C programming. In this sheet, you will find a set of questions related to C programming concepts. Each question includes a title, introduction, code, possible outputs, description, and a conclusion.

## Table of Contents

1. [WAP to read 10 numbers from user and find their sum and average.](#q1)
2. [WAP to display the multiplication table of integer given by the user.](#q1)
3. [WAP to input two integer values from the user and print the even number between the range of integers. Also count the even number and display the count as well [Hint: if user enters 10 and 100. The program should print and count even numbers between 10 and 100].](#q3)
4. [WAP to display sum of series: 1 + 1/2 + 1/3 + 1/4 + 1/5 ... 1/n](#q4)
5. [WAP to display sum of series: 1 + 1/2! + 1/3! + 1/4! + 1/5! ... 1/n!](#q5)
6. [WAP to display sum of series: x + x2/2! + x3/3! + x4/4! + x5/5! ... xn/n!](#q6)
7. [WAP to find the value cos(x) without using cos(x) library function.](#7)
8. [WAP to display weather a number is Armstrong or not.](#q8)
9. [WAP to display the first n terms of Fibonacci series.](#q9)
10. [WAP to display the number in reverse order.](#q10)
11. [WAP to check whether a number is a palindrome or not.](#q11)
12. [WAP to find HCF and LCM of two numbers.](#q12)
13. [WAP to print the following patterns:](#q13)

---
---

## See Also
* [Lab Sheet 5.docx](./lab-sheet-5.docx)
* [Lab Sheet 5.pdf](./lab-sheet-5.pdf)

---
---
<br/>
<br/>

>## <span id="q1">1. WAP to read 10 numbers from user and find their sum and average.</span>

### **Introduction**
This program reads 10 numbers from the user, calculates their sum, and computes their average.


### **Code**

```c
#include <stdio.h>

int main() {
    int num, sum = 0;
    float average;

    printf("Enter 10 numbers:\n");

    for (int i = 1; i <= 10; i++) {
        printf("Number %d: ", i);
        scanf("%d", &num);
        sum += num;
    }

    average = (float) sum / 10;

    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", average);

    return 0;
}
```
### **Possible Output**

```
Enter 10 numbers:
Number 1: 5
Number 2: 7
Number 3: 3
Number 4: 9
Number 5: 2
Number 6: 8
Number 7: 6
Number 8: 1
Number 9: 4
Number 10: 10
Sum: 55
Average: 5.50
```

### **Description**
* The program prompts the user to enter 10 numbers.
* It uses a for loop to iterate 10 times, each time asking the user to input a number.
* The entered number is added to the sum variable.
* After the loop completes, the average is calculated by dividing the sum by 10, using typecasting to ensure the division is performed in floating-point arithmetic.
* Finally, the program prints the calculated sum and average values. The %.2f format specifier is used to display the average with two decimal places.
### **Conclusion**
The program successfully reads 10 numbers from the user, calculates their sum, and computes their average. The output displays the sum and average of the entered numbers. This program can be used to quickly calculate the sum and average of any set of 10 numbers provided by the user.


---
---
<br/>
<br/>

>## <span id="q2">2. WAP to display the multiplication table of integer given by the user. </span>

### **Introduction**

Description
This program displays the multiplication table of an integer provided by the user. It prompts the user to enter a number, and then it uses a for loop to iterate from 1 to 10 and calculate the product of the entered number with each iteration variable.

### **Code**

```c
#include <stdio.h>

int main()
{
    int num, i;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Multiplication table of %d:\n", num);

    for (i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}
```
### **Possible Output**

```
Enter a number: 7
Multiplication table of 7:
7 x 1 = 7
7 x 2 = 14
7 x 3 = 21
7 x 4 = 28
7 x 5 = 35
7 x 6 = 42
7 x 7 = 49
7 x 8 = 56
7 x 9 = 63
7 x 10 = 70
```

### **Description**
* The user is prompted to enter a number.
* The entered number is stored in the variable num.
* The program prints the header line for the multiplication table.
* The for loop is used to iterate from 1 to 10.
* Inside the loop, the program calculates the product of num and the current iteration value i and prints it in the format "num x i = product".
* After the loop completes, the program terminates.
### **Conclusion**
The program successfully displays the multiplication table of the integer entered by the user. It iterates from 1 to 10 and calculates the products using the entered number. The output shows each multiplication equation, demonstrating the multiplication table of the given number.

---
---
<br/>
<br/>

<!-- 
>## <span id="q1">1. WAP to read 10 numbers from user and find their sum and average.</span>

### **Introduction**

### **Code**

```c

```
### **Possible Output**

```

```

### **Description**

### **Conclusion**

---
---
<br/>
<br/> -->
