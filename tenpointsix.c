//Linked lists. A structure is set up so that one entry points to the
//next in a list. Learning C in a vaccuum makes it difficult to see
//how this is implented in a live system. Kochan writes, "The concepts
//of pointers to structures and structures containing pointers are very
//powerful ones in C, for they enable you to create sophisticated data
//structures, such as linked lists, doubly linked lists, and trees."

#include <stdio.h>

int main (void)
{
    struct entry
    {
        int value;
        struct entry *next;
    };

    struct entry n1, n2, n3;
    int i;

    n1.value = 100;
    n2.value = 200;
    n3.value = 300;

    n1.next = &n2;
    n2.next = &n3;

    i = n1.next->value;
    printf("%i ", i);
    
    printf("%i\n", n2.next->value);

    return 0;
}