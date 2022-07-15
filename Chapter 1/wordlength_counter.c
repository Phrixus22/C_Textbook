#include <stdio.h>

/* Exercise 1.13 */

#define IN 1
#define OUT 0

int c, i, j, wordLength, barLength, state;
float nw;
float lengthCount[12];



main () {
    nw = 0.0;
    state = OUT;
    
    for (i = 0; i < 12; ++i)
        lengthCount[i] = 0.0;

    while ((c = getchar()) != EOF){
        if (c == '\n' || c == ' ' || c == '\t'){
            state = OUT;
            ++lengthCount[wordLength];
            wordLength = 0;
        }
        else if (state == OUT){
            state = IN;
            ++nw;
            ++wordLength;
        }
        else{
            ++wordLength;
        }
    }
    printf("Word Count: %.0f\n", nw);
    for (i = 0; i < 12; ++i){
        barLength = (lengthCount[i] / nw)*10;
        printf("%3d | ", i);
        for (j = 0; j < barLength*3; ++j){
            printf("#");
        }
        printf("| %.0f/%.0f\n", lengthCount[i], nw);
    }
}