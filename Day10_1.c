//Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

#include <stdio.h>
int main()  
{
    float side1, side2, side3;

    // Input the lengths of the sides
    printf("Enter the lengths of the three sides of the triangle: ");
    scanf("%f %f %f", &side1, &side2, &side3);

    // Check if the sides can form a triangle
    if (side1 <= 0 || side2 <= 0 || side3 <= 0)
    {
        printf("Invalid side lengths. All sides must be positive.");
        return 1; // Exit the program with an error code
    }

    if (side1 + side2 <= side3 || side1 + side3 <= side2 || side2 + side3 <= side1)
    {
        printf("The given lengths do not form a triangle.");
        return 1; // Exit the program with an error code
    }

    // Classify the triangle
    if (side1 == side2 && side2 == side3)
    {
        printf("The triangle is Equilateral.");
    }
    else if (side1 == side2 || side1 == side3 || side2 == side3)
    {
        printf("The triangle is Isosceles.");
    }
    else
    {
        printf("The triangle is Scalene.");
    }

    return 0;
}