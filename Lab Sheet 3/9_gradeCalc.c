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

    // Check if the student passed or failed
    if (cProgramming > FM || physics > FM || maths > FM || appliedMechanics > FM || basicElectrical > FM)
    {
        printf("Error: Marks cannot be greater than 100.\n");
    }
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
