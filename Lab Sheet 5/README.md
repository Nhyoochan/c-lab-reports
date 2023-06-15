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


>## <span id="q3">3. WAP to input two integer values from the user and print the even number between the range of integers. Also count the even number and display the count as well [Hint: if user enters 10 and 100. The program should print and count even numbers between 10 and 100].</span>

### **Introduction**
This program takes two integer values from the user, min and max, and prints all the even numbers between the range of these two values. It also counts the number of even numbers and displays the count.
### **Code**

```c
#include <stdio.h>

int main()
{
    int min, max, count = 0;

    printf("Enter the minimum and maximum value: ");
    scanf("%d%d", &min, &max);

    if (min > max)
    {
        int temp = min;
        min = max;
        max = temp;
    }

    printf("The even numbers between %d and %d are: ", min, max);

    for (int i = min + 1; i < max; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d ", i);
            count++;
        }
    }

    if (count == 0)
    {
        printf("none ");
    }

    printf("\nThere are %d even numbers.\n", count);

    return 0;
}
```
### **Possible Output**

```
Enter the minimum and maximum value: 10 20
The even numbers between 10 and 20 are: 12 14 16 18 
There are 4 even numbers.
```
```
Enter the minimum and maximum value: 15 15
The even numbers between 15 and 15 are: none 
There are 0 even numbers.
```
```
Enter the minimum and maximum value: 20 10
The even numbers between 10 and 20 are: 12 14 16 18 
There are 4 even numbers.
```

### **Description**
* The user is prompted to enter the minimum and maximum values.
* The entered values are stored in the variables min and max.
* If the minimum value is greater than the maximum value, the program swaps the values.
* The program prints the header line for the even numbers.
* The for loop is used to iterate from min + 1 to max - 1.
* Inside the loop, the program checks if the current value i is divisible by 2 (i.e., even). If so, it is printed and the count is incremented.
* If no even numbers are found (count is 0), the program prints "none".
* Finally, the program prints the count of even numbers.
* The program terminates.
### **Conclusion**
The program successfully takes two integer values from the user and prints all the even numbers between the given range. It counts the even numbers and displays the count. The output demonstrates the even numbers between the provided range and shows the count of even numbers.


---
---
<br/>
<br/>

>## <span id="q4">4. WAP to display sum of series: 1 + 1/2 + 1/3 + 1/4 + 1/5 ... 1/n.</span>

### **Introduction**
This program calculates the sum of the series: 1 + 1/2 + 1/3 + 1/4 + 1/5 + ... + 1/n, where n is the value provided by the user.
### **Code**

```c
#include <stdio.h>

int main()
{
    int n;
    float sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        sum += 1 / (float)i;
    }

    printf("The sum of series: 1 + 1/2 + 1/3 + 1/4 + 1/5 ... 1/n is %f", sum);

    return 0;
}
```
### **Possible Output**

```
Enter the value of n: 5
The sum of series: 1 + 1/2 + 1/3 + 1/4 + 1/5 ... 1/n is 2.283333
```

### **Description**
* The user is prompted to enter the value of n.
* The entered value is stored in the variable n.
* The program initializes the variable sum as 0 to store the sum of the series.
* The for loop is used to iterate from 1 to n.
* Inside the loop, the program adds the reciprocal of the current value i to the sum.
* Since the division is between an integer (1) and a float ((float)i), the result is automatically converted to a float, ensuring the decimal values are considered in the sum.
* After the loop finishes, the program prints the calculated sum of the series.
* The program terminates.
### **Conclusion**
The program successfully calculates and displays the sum of the given series based on the value of n entered by the user. The output demonstrates the sum of the series for a specific value of n.


---
---
<br/>
<br/> 

 
>## <span id="q5">5. WAP to display sum of series: 1 + 1/2! + 1/3! + 1/4! + 1/5! ... 1/n! </span>

### **Introduction**
This program calculates the sum of the series: 1 + 1/2! + 1/3! + 1/4! + 1/5! + ... + 1/n!, where n is the value provided by the user. The series involves computing the factorial of each term in the denominator.
### **Code**

```c
#include <stdio.h>

int main()
{
    int n, factorial = 1;
    float sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        factorial *= i;
        sum += 1 / (float)factorial;
    }

    printf("The sum of series: 1 + 1/2! + 1/3! + 1/4! + 1/5! ... 1/n! is %f", sum);

    return 0;
}
```
### **Possible Output**

```
Enter the value of n: 5
The sum of series: 1 + 1/2! + 1/3! + 1/4! + 1/5! ... 1/n! is 1.716667
```

### **Description**
* The user is prompted to enter the value of n.
* The entered value is stored in the variable n.
* The program initializes the variable factorial as 1 to calculate the factorial of each term in the series.
* The program initializes the variable sum as 0 to store the sum of the series.
* The for loop is used to iterate from 1 to n.
* Inside the loop, the program calculates the factorial of the current value i by multiplying it with the previous factorial.
* The reciprocal of the current factorial is added to the sum.
* Since the division is between an integer (1) and a float ((float)factorial), the result is automatically converted to a float, ensuring the decimal values are considered in the sum.
* After the loop finishes, the program prints the calculated sum of the series.
* The program terminates.
### **Conclusion**
The program successfully calculates and displays the sum of the given series based on the value of n entered by the user. The output demonstrates the sum of the series for a specific value of n by computing the factorials of the terms in the denominator.


---
---
<br/>
<br/> 



>## <span id="q6">6.WAP to display sum of series: x + x2/2! + x3/3! + x4/4! + x5/5! ... xn/n!</span>

### **Introduction**
This program calculates the sum of the series: x + x^2/2! + x^3/3! + x^4/4! + x^5/5! + ... + x^n/n!, where x and n are the values provided by the user. The series involves raising x to different powers and dividing by the corresponding factorials.

### **Code**

```c
#include <stdio.h>
#include <math.h>

int main()
{
    float x, sum = 0;
    int n, factorial = 1;

    printf("Enter the value of x: ");
    scanf("%f", &x);
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        factorial *= i;
        sum += (pow(x, i) / factorial);
    }

    printf("The sum of series: x + x^2/2! + x^3/3! + x^4/4! + x^5/5! ... x^n/n! is %f.", sum);

    return 0;
}
```
### **Possible Output**

```
Enter the value of x: 2
Enter the value of n: 5
The sum of series: x + x^2/2! + x^3/3! + x^4/4! + x^5/5! ... x^n/n! is 10.266667.
```

### **Description**
* The user is prompted to enter the value of x.
* The entered value is stored in the variable x.
* The user is prompted to enter the value of n.
* The entered value is stored in the variable n.
* The program initializes the variable factorial as 1 to calculate the factorial of each term in the series.
* The program initializes the variable sum as 0 to store the sum of the series.
* The for loop is used to iterate from 1 to n.
* Inside the loop, the program calculates the factorial of the current value i by multiplying it with the previous factorial.
* The program raises x to the power of the current value i using the pow function and divides it by the current factorial.
* The resulting value is added to the sum.
* After the loop finishes, the program prints the calculated sum of the series.
* The program terminates.
### **Conclusion**
The program successfully calculates and displays the sum of the given series based on the values of x and n entered by the user. The output demonstrates the sum of the series for a specific value of x and n by raising x to different powers and dividing by the corresponding factorials.


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
