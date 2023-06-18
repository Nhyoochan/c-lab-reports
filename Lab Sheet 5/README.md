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


  
>## <span id="q7">7. WAP to find the value cos(x) without using cos(x) library function.</span>

### **Introduction**
This program calculates the value of cos(x) without using the cos(x) library function. It uses the Taylor series expansion of cos(x) to approximate the value. The program takes the value of x in degrees, converts it to radians, and then uses the series approximation to calculate cos(x).
### **Code**

```c
#include <stdio.h>

int main()
{
    int n = 1;
    float term = 1, factorial, x, cosx = 1;
    printf("Enter the value of x (in degrees): ");
    scanf("%f", &x);
    float x_in_deg = x;
    /* Converting degrees to radians */
    x = x * (3.142 / 180.0);

    do
    {
        factorial = 2 * n * (2 * n - 1);
        term = -term * x * x / factorial;
        cosx = cosx + term;
        n++;
    } while (n < 999);

    printf("Cos(%.2fdeg):  %.2f\n", x_in_deg, cosx);

    return 0;
}
```
### **Possible Output**

```
Enter the value of x (in degrees): 45
Cos(45.00deg):  0.71
```

### **Description**
* The user is prompted to enter the value of x in degrees.
* The entered value is stored in the variable x.
* The program creates a variable x_in_deg to store the original value of x in degrees for display purposes.
* The program converts the value of x from degrees to radians by multiplying it by (3.142 / 180.0) (approximation of π/180).
* The program initializes variables n as 1, term as 1, factorial, and cosx as 1.
* The program enters a do-while loop.
* Inside the loop, the program calculates the factorial of the current value of n using the formula 2 * n * (2 * n - 1).
* The program calculates the term of the series approximation by multiplying the previous term with -x * x and dividing by the factorial.
* The program adds the term to cosx.
* The program increments n by 1.
* The loop continues until n reaches 999.
* After the loop finishes, the program prints the calculated value of cos(x) for the original value of x in degrees.
* The program terminates.


### **More on Taylor Series**
The Taylor series is a representation of a function as an infinite sum of terms, where each term is calculated based on the derivatives of the function at a specific point. For cos(x), the Taylor series expansion is as follows:

cos(x) = 1 - (x^2)/2! + (x^4)/4! - (x^6)/6! + ...

In this expansion, each term is obtained by taking alternating powers of x and dividing it by the factorial of an even number. The alternating signs (+/-) in the series are crucial for approximating the cosine function accurately.

In the program, the Taylor series is implemented using a loop. The loop starts with an initial value of n = 1 and a term value of 1, representing the first term in the series (which is always 1). Then, in each iteration of the loop, the program calculates the factorial of 2n(2n-1) and updates the term by multiplying it with -x^2 and dividing by the factorial. Finally, the term is added to the cosx variable.

By repeating this process for a sufficient number of terms (in this case, until n reaches 999), the program approximates the value of cos(x). The more terms included in the series, the closer the approximation becomes to the actual value of cos(x).

It's important to note that the Taylor series is an approximation, and the accuracy of the approximation depends on the number of terms used. Using more terms in the series will yield a more accurate result but also requires more computational effort. In this program, a fixed number of terms is used for simplicity, but in practice, the number of terms can be adjusted based on the desired level of accuracy.

By using the Taylor series expansion, this program demonstrates how we can calculate an approximation of cos(x) without relying on the built-in cos(x) function, making it a useful technique for situations where the cosine function is not readily available or for educational purposes to understand the underlying principles of approximating functions using series expansions.

### **Conclusion**
The program successfully calculates and displays the approximate value of cos(x) based on the Taylor series expansion. It provides an approximation of cos(x) without using the cos(x) library function by using a series of terms that converge to the value of cos(x). The output demonstrates the calculated value of cos(x) for a given value of x entered by the user in degrees.


---
---
<br/>
<br/> 

 
>## <span id="q8">8. WAP to display weather a number is Armstrong or not.</span>

### **Introduction**
This program checks whether a given number is an Armstrong number or not. An Armstrong number is a number that is equal to the sum of its own digits, each raised to the power of the number of digits.
### **Code**

```c
#include <stdio.h>
#include <math.h>

int main()
{
    int num, rem, armstrong = 0, count = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    int org_num = num;

    while (org_num != 0)
    {
        org_num /= 10;
        count++;
    }

    org_num = num;

    while (org_num != 0)
    {
        rem = org_num % 10;
        org_num /= 10;
        armstrong += pow(rem, count);
    }

    if (num == armstrong)
    {
        printf("%d is an Armstrong number.", num);
    }
    else
    {
        printf("%d is not an Armstrong number.", num);
    }

    return 0;
}
```
### **Possible Output**

```
Enter a number: 153
153 is an Armstrong number.
```
```
Enter a number: 155
155 is an Armstrong number.
```

### **Description**
* The user is prompted to enter a number.
* The entered number is stored in the variable num.
* The original value of num is also stored in the variable org_num for later comparison.
* The program initializes the variable rem to store the remainder of each digit.
* The program initializes the variable armstrong to 0, which will accumulate the sum of the digits raised to the power of the count.
* The program initializes the variable count to 0, which will count the number of digits in the number.
* The program enters a while loop that divides org_num by 10 and updates it until org_num becomes 0. This loop counts the number of digits in the number.
* After the first loop finishes, the variable count will contain the number of digits in the number.
* The program resets org_num to the original value of num.
* The program enters another while loop that calculates the remainder of org_num divided by 10 using the modulo operator %.
* The program then updates org_num by dividing it by 10, effectively removing the last digit.
* The power of the remainder is calculated using the pow() function from the math.h library and added to armstrong.
* Steps 10-12 are repeated for each digit of the number.
* After the second loop finishes, the program checks if num is equal to armstrong.
* If they are equal, it means the number is an Armstrong number, and a corresponding message is displayed.
* If they are not equal, it means the number is not an Armstrong number, and a corresponding message is displayed.
* The program terminates.
### **Conclusion**
The program successfully determines whether the given number is an Armstrong number or not. It calculates the sum of the digits raised to the power of the count, and compares it to the original number. The output indicates whether the number is an Armstrong number or not based on the comparison result.


---
---
<br/>
<br/>


 
>## <span id="q9">1.WAP to display the first n terms of Fibonacci series.</span>

### **Introduction**
This program displays the first n terms of the Fibonacci series. The Fibonacci series is a sequence of numbers in which each number is the sum of the two preceding ones, starting with 0 and 1.
### **Code**

```c
#include <stdio.h>

int main()
{
    int n, fibonacci_term = 0, n_1, n_2;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Fibonacci Series to %dth term: \n", n);

    for (int i = 1; i <= n; i++)
    {
        if (i == 1)
        {
            fibonacci_term = 0;
        }
        else if (i == 2)
        {
            n_1 = fibonacci_term;
            fibonacci_term = 1;
        }
        else
        {
            n_2 = n_1;
            n_1 = fibonacci_term;
            fibonacci_term = n_2 + n_1;
        }
        printf("%d ", fibonacci_term);
    }

    return 0;
}
```
### **Possible Output**

```
Enter a number: 10
Fibonacci Series to 10th term:
0 1 1 2 3 5 8 13 21 34
```

### **Description**
* The user is prompted to enter a number.
* The entered number is stored in the variable n.
* The program initializes the variable fibonacci_term to store the current term of the Fibonacci series.
* The program initializes the variables n_1 and n_2 to store the (n-1)th and (n-2)th terms of the Fibonacci series, respectively.
* The program enters a for loop that iterates from 1 to n.
* Inside the loop, the program checks the value of i to determine the current term of the Fibonacci series.
* If i is 1, the current term is set to 0 (the first term of the series).
* If i is 2, the current term is set to 1 (the second term of the series) and the value of n_1 is updated to the previous term.
* If i is greater than 2, the program updates the values of n_2, n_1, and fibonacci_term to calculate the current term by adding the (n-1)th and (n-2)th terms.
* The program then prints the current term of the Fibonacci series.
* Steps 6-10 are repeated for each term of the series up to n.
* The program terminates.
### **Conclusion**
The program successfully displays the first n terms of the Fibonacci series. It calculates each term of the series by adding the two preceding terms. The output shows the Fibonacci series up to the nth term based on the user's input.


---
---
<br/>
<br/> 

  
>## <span id="q10">10. WAP to display the number in reverse order.</span>

### **Introduction**
This program displays a number in reverse order. It takes an integer input from the user and then reverses the order of its digits.
### **Code**

```c
#include <stdio.h>

int main()
{
    int num, reversed;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Before Reversing: %d\n", num);

    for (reversed = 0; num != 0; num /= 10)
    {
        reversed = (reversed * 10) + (num % 10);
    }

    printf("After Reversing: %d\n", reversed);

    return 0;
}
```
### **Possible Output**

```
Enter a number: 12345
Before Reversing: 12345
After Reversing: 54321
```

### **Description**
* The user is prompted to enter a number.
* The entered number is stored in the variable num.
* The program prints the original number before reversing.
* A for loop is used to reverse the number:
* The variable reversed is initialized to 0.
* The loop continues as long as num is not equal to 0.
* In each iteration, the last digit of num (obtained by taking the modulus with 10) is added to reversed after shifting its digits left by multiplying by 10.
* The last digit of num is removed by dividing it by 10.
* The loop continues until all the digits of num have been reversed.
* The program prints the reversed number.
* The program terminates.
### **Conclusion**
The program successfully reverses the digits of a given number. It uses a for loop to extract the last digit of the number, add it to the reversed number, and remove the last digit. This process is repeated until all the digits are reversed. The output displays the original number and the reversed number.


---
---
<br/>

 
>## <span id="q11">11. WAP to check whether a number is a palindrome or not.</span>

### **Introduction**
This program checks whether a number is a palindrome or not. A palindrome number is a number that remains the same when its digits are reversed.
### **Code**

```c
#include <stdio.h>

int main()
{
    int num, reversed = 0, org_num;

    printf("Enter a number: ");
    scanf("%d", &num);

    org_num = num;

    for (; num != 0; num /= 10)
    {
        reversed = (reversed * 10) + (num % 10);
    }

    if (org_num == reversed)
    {
        printf("%d is a palindrome number.", org_num);
    }
    else
    {
        printf("%d is not a palindrome number.", org_num);
    }

    return 0;
}
```
### **Possible Output**

```
Enter a number: 12321
12321 is a palindrome number.
```

### **Description**
* The user is prompted to enter a number.
* The entered number is stored in the variable num.
* The variable org_num is assigned the value of num to keep a copy of the original number for comparison later.
* A for loop is used to reverse the number:
* The variable reversed is initialized to 0.
* The loop continues as long as num is not equal to 0.
* In each iteration, the last digit of num (obtained by taking the modulus with 10) is added to reversed after shifting its digits left by multiplying by 10.
* The last digit of num is removed by dividing it by 10.
* The loop continues until all the digits of num have been reversed.
* The program compares the original number (org_num) with the reversed number (reversed) to check if they are equal.
* If the numbers are equal, the program prints that it is a palindrome number.
* If the numbers are not equal, the program prints that it is not a palindrome number.
* The program terminates.
### **Conclusion**
The program successfully checks whether a given number is a palindrome or not. It uses a for loop to reverse the digits of the number and stores the reversed number in a separate variable. Then it compares the original number with the reversed number to determine if they are equal. The output displays whether the number is a palindrome or not based on the comparison result.


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
