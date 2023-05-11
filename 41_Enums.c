#include <stdio.h>

enum Day{Sun = 1, Mon = 2, Tues = 3, Wed = 4, Thu = 5, Fri = 6, Sat = 7};

int main()
{
    // enum = (short for numerations) a user defined type of named integer identifiers
    //        helps to make a program more readable
    
    enum Day today = Sun;

    //printf("%d",today); // enum are NOT STRINGS, but they can be treated as int

    if (today == Sun || today == Sat)
    {
        printf("\nIt's the weekend! Party time!");
    }
    else
    {
        printf("I have to work today :(");
    }
    

    return 0;
}