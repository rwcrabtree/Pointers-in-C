//Pointers to structures, and the introduction of a new special
//operator ->. -> is the shortened form of (*x) . y, a pointer
//to a structure.

#include <stdio.h>

int main (void)
{
    struct date
    {
        int month;
        int day;
        int year;
    };

    struct date today, *datePtr;

    datePtr = &today;

    datePtr -> month = 9;
    datePtr -> day = 25;
    datePtr -> year = 2015;

    printf("Todays date is %i/%i/%.2i.\n", 
        datePtr->month, datePtr->day, datePtr->year % 100);

    return 0;
}

//Using the pointer *datePtr to point to the values within a struct "date.""