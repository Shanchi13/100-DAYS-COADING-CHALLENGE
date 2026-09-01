//Q28: Write a program to print the product of even numbers from 1 to n

#include <stdio.h>
int main()  
{
    int n, i;
    long long product = 1; // Use long long to handle larger products

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Please enter a positive integer greater than 0.");
        return 1; // Exit the program with an error code
    }

    for (i = 2; i <= n; i += 2) // Start from 2 and increment by 2 to get even numbers
    {
        product *= i; // Multiply the even number to the product
    }

    printf("The product of even numbers from 1 to %d is: %lld\n", n, product);

    return 0;
}