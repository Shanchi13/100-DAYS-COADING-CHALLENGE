//Q5: Write a program to convert temperature from Celsius to Fahrenheit.

#include <stdio.h>

int main()
{
    float celsius, fahrenite;

    // Input temperature in Celsius
    printf("Enter temperature in Celsius: ");       
    scanf("%f", &celsius);

    // Convert Celsius to Fahrenheit
    fahrenite = (celsius * 9 / 5) + 32;

    // Display the temperature in Fahrenheit
    printf("%.2f Celsius is equal to %.2f Fahrenheit\n", celsius, fahrenite);

    return 0;
}