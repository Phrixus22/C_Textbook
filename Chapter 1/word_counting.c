#include <stdio.h>
/*
Exercise 1.11-12
Bugs could be cause if word is split over two lines as it is considered a new word on a newline.
inputs required are edge cases such as this or apostrophies. anyhting more complex than a simple word.
*/

#define IN 1
#define OUT 0

main(){
    int c, nw, state, count;
    nw = 0;
    state = OUT;
    count = 0;
    while((c = getchar()) != EOF){
        if(c == ' ' || c == '\n' || c == '\t')
            state = OUT;
        else if (state == OUT) {
            state = IN;
            if(count > 0)
                putchar('\n');
            putchar(c);
            ++nw;
            ++count;
        } else 
            putchar(c);
    }
    printf("%d\n", nw);
}