#include <stdio.h>

/*Exercise 1.6
Testing the EOF symbolic constant

EOF given value -1 as this is an impossible value for a character on the ASCII keyboard,
and can be guaranteed to not be used in the library.*/

main()
{
    int c;
    printf("%d\n", ((c = getchar()) != EOF));
    printf("%d\n", EOF);
}