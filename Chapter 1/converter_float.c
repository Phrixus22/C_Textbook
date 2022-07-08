#include <stdio.h>

/*
Integer division truncates decimal points so accuracy is lost or calculations fail.
If 5/9 was done it would equal 0.
*/

main(){
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;
    
    fahr = lower;
    printf("Fahr | Celsius\n--------------\n");
    while (fahr <= upper)
    {
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%4.0f | %7.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}