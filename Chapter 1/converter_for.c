#include <stdio.h>
/*
Exercise 1.5
Converter from celsius to farenheit in reverse order from 300 to 0.
Using a for loop
ADDED SYMBOLIC CONSTANTS
*/
#define UPPER 300
#define LOWER 0
#define STEP 20

main()
{
    int fahr;
    for (fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP)
        printf("%d %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32)); 
}