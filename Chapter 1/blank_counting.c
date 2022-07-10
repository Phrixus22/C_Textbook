#include <stdio.h>

/*
Covering Exercises 1.8-9
Write a program to count blanks, tabs and newlines
Write a program to copy its input to its output
replacing each string of one or more blanks with a single.
Write a profram to copy its input to its output.
Replacing tab wit \t etc..
*/

#define IN 1
#define OUT 0

main()
{
    int c, nb, nt, nl, state;
    nb = nt = nl = 0;
    state = OUT;
    while((c = getchar()) != EOF){
        if(c == '\t')
            ++nt;
        if(c == '\n')
            ++nl;
        if(c == ' ')
        {
            if(state == OUT){
                putchar(c);
            }
            state = IN;
            ++nb;
        }
        else
        {
            state = OUT;
            putchar(c);
        }
    }
    printf("%d %d %d\n", nb, nt, nl);
}
