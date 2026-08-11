//Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

#include <stdio.h>

int main()
{
    int Length, Breadth, Area, Perimeter;

    printf("Enter the length of the rectangle: ");
    scanf("%d", &Length);   

    printf("Enter the breadth of the rectangle: ");
    scanf("%d", &Breadth);

    Area = Length * Breadth;
    Perimeter = 2 * (Length + Breadth);

    printf("The area of the rectangle is: %d\n", Area);
    printf("The perimeter of the rectangle is: %d\n", Perimeter);
     
    return 0;
}