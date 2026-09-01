//Q27: Write a program to print the sum of the first n odd numbers.

#include <stdio.h>
int main()
{
    int n, i, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Please enter a positive integer greater than 0.");
        return 1; // Exit the program with an error code
    }

    for (i = 1; i <= n; i++)
    {
        sum += (2 * i - 1); // Calculate the ith odd number and add to sum
    }

    printf("The sum of the first %d odd numbers is: %d\n", n, sum);

    return 0;
}