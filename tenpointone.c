//Kochan writes, "To understand the way in which pointers operate, it is
//first neccessary to understand the concpet of indirection." p 233

#include <stdio.h>

int main (void)
{
    int count = 10, x;
    int *int_pointer;

    int_pointer = &count;
    x = *int_pointer;

    printf("count = %i, x = %i\n", count, x);

    return 0;
}

//"int_pointer = &count" illustrates the basic way the asterisk '*' and operator '&' work 
//together in this inderection. "int_pointer" is declared as a variable with an asterisk
//'*' to define it as a pointer to int. This sets int_pointer up to indirectly access any
//int that points to it with the '&' operator. In the printf function above we call for
//"count," and "x," to be shown in the termial, both print the value 10. "int_pointer" is
//used in both instances to hold the value.