//Q7: Write a program to swap two numbers without using a third variable.

#include <stdio.h>

int main()
{
    int a, b;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Swapping without using a third variable
    a = a + b; // Step 1: Add both numbers and store in 'a'
    b = a - b; // Step 2: Subtract the new 'b' from 'a' to get the original 'a'
    a = a - b; // Step 3: Subtract the new 'b' from the new 'a' to get the original 'b'

    // Display the swapped numbers
    printf("After swap: %d %d\n", a, b);

    return 0;
}