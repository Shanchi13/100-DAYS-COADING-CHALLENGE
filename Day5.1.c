//Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

#include <stdio.h>
#include <math.h>

int main()
{
    float principle , rate, time, SI, CI;

    printf("Enter principle, rate and time: ");
    scanf("%f %f %f", &principle, &rate, &time);
    SI = (principle * rate * time) / 100;
    CI = principle * pow(1 + rate / 100, time) - principle;
    printf("Simple Interest=%.2f\nCompound Interest=%.2f", SI, CI);
    return 0;
}