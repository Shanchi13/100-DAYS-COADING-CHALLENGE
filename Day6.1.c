//Q11: Write a program to input an integer and check whether it is even or odd using if–else.

#include <stdio.h>

int main()
{
    int No;

    printf("Enter an integer: ");
    scanf("%d", &No);
    if (No % 2 == 0)
    {
        printf("%d is even.\n", No);
    }
    else
    {
        printf("%d is odd.\n", No);    
    }
    return 0;
}