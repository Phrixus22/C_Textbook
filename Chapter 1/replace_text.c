#include <stdio.h>

/*Exercise 1.10
replace \t, \b and \\ with string*/

main(){
    int c;
    while((c = getchar()) != EOF)
    {
        if(c == '\t' || c =='\b' || c == '\\'){
            if(c == '\t'){
                putchar('\\');
                putchar('t');
            }
            if(c == '\b'){
                putchar('\\');
                putchar('b');
            }
            if(c == '\\'){
                putchar('\\');
                putchar('\\');
            }
        }
        else
            putchar(c);
    }
}