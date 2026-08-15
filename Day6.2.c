//Q12: Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.

#include <stdio.h>

int main()
{
    int No;

    printf("Enter an integer: ");
    scanf("%d", &No);
    if (No > 0)
    {
        printf("%d is positive.\n", No);
    }
    else
    {
        if (No < 0)
        {
            printf("%d is negative.\n", No);
        }
        else
        {
            printf("The number is zero.\n");
        }
    }
    return 0;
}