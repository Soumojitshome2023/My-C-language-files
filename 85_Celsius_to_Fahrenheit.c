#include <stdio.h>

int main()
{
    float celsius, fahrenheit;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    // Formula to convert Celsius to Fahrenheit:
    // F = (1.8 * C) + 32

    fahrenheit = (1.8 * celsius) + 32;

    printf("Temperature in Fahrenheit is: %f ", fahrenheit);

    return 0;
}