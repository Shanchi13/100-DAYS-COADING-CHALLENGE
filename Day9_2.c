//Q18: Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria: 
//90-100: Grade A 
//80-89: Grade B 
//70-79: Grade C 
//60-69: Grade D 
//below 60: Grade F.
#include <stdio.h>
int main()
{
    float percentage;

    // Input percentage
    printf("Enter the percentage (0-100): ");
    scanf("%f", &percentage);

    // Check if the percentage is valid
    if (percentage < 0 || percentage > 100)
    {
        printf("Invalid percentage. Please enter a value between 0 and 100.");
        return 1; // Exit the program with an error code
    }

    // Assign grade based on percentage
    if (percentage >= 90)
    {
        printf("Grade A");
    }
    else if (percentage >= 80)
    {
        printf("Grade B");
    }
    else if (percentage >= 70)
    {
        printf("Grade C");
    }
    else if (percentage >= 60)
    {
        printf("Grade D");
    }
    else
    {
        printf("Grade F");
    }

    return 0;
}