//Q26: Write a program to print numbers from 1 to n.

#include <stdio.h>
int main()
{
    int n, i;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Please enter a positive integer greater than 0.");
        return 1; // Exit the program with an error code
    }

    printf("Numbers from 1 to %d:\n", n);
    for (i = 1; i <= n; i++)
    {
        printf("%d\n", i);
    }

    return 0;
}