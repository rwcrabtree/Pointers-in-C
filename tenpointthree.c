//Kochan writes, "If p1 is defined to be of type 'pointer to integer'
//what conclusion do you think can be made about the use of *p1 in
//an expression?"

#include <stdio.h>

int main (void)
{
    int i1, i2;
    int *p1, *p2;

    i1 = 5;
    p1 = &i1;
    i2 = *p1 / 2 + 10;
    p2 = p1;

    printf("i1 = %i, i2 = %i, *p1 = %i, *p2 = %i\n", i1, i2, *p1, *p2);

    return 0;
}

//i1 is simply declared. *p1 is set to point to i1, so the i2 expression 
//reads "i2 = 5 / 2 + 10." The final expression, if *p1 is set to point
//to an int with a value of 5, then *p2 = 5 as well. The asterisk
//has higher precedence in arithmetic order of operations.