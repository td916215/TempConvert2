#include <stdio.h>
#include <stdlib.h>
#include "TempConvert.h"

int main()
{
    printf("Enter temperature in Celsius: ");

    float tempC;
    scanf("%f", &tempC);

    float tempF;
    tempF = convertTemperature(tempC);

    printf("Temperature in Fahrenheit: %f", tempF);

    return 0;
}
