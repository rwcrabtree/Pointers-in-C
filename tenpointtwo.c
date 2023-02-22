//The following, *char_pointer, illustrates a pointer in reference to
//several characters in various ways. 'c' with the operator '&' and 
//*char_pointer connect to each other. At this point in the chapter
//Kochan says for the first time that these examples are key to 
//understanding, do no move on if it isn't making sense at this 
//point.

#include <stdio.h>

int main (void)
{
    char c = 'Q';
    char *char_pointer = &c;

    printf("%c %c\n", c, *char_pointer);

    c = '/';
    printf("%c %c\n", c, *char_pointer);

    *char_pointer = '(';
    printf("%c %c\n,", c, *char_pointer);

    return 0;
}