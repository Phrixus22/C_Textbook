#include <stdio.h>

/*
Celsius to Fahrenheit Converter with Float and header.
*/

main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = -17;
    upper = 143;
    step = 10;

    celsius = lower;
    printf("Clesius | Fahr\n--------------\n");
    while (celsius <= upper)
    {
        fahr = (celsius / (5.0 / 9.0)) + 32.0;
        printf("%7.0f | %4.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
}