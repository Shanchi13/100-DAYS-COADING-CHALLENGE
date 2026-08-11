//Write a program to calculate the area and circumference of a circle given its radius.

#include <stdio.h>

int main()
{
    int radius;
    float Pi = 3.14, Area, Circumference;
    printf("Enter the radius of the circle: ");
    scanf("%d", &radius);

    Area = Pi * radius * radius;
    Circumference = 2 * Pi * radius;    

    printf("The area of the circle is: %.2f\n", Area);
    printf("The circumference of the circle is: %.2f\n", Circumference);  

    return 0;
}