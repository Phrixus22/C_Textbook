#include <stdio.h>

/*
Exercise 1.15
Fahrenheit Converter function with float numbers
*/

float fahrToDeg(float fahr);
/*Prototype function for conversion to celsius*/

int main(){
    float fahr;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    while (fahr <= upper){
        printf("%4.0f | %7.1f\n", fahr, fahrToDeg(fahr));
        fahr = fahr + step;
    }
    return 0;
}

float fahrToDeg(float fahr){
    return ((5.0 / 9.0) * (fahr - 32.0));
}