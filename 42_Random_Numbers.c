#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    //pseudo random numbers = A set of values or elements that is statistically random
    //                        (Don't use these for any sort of cryptographic security)

    srand(time(0));

    int number1 = (rand() % 6) + 1; // +1 is for offset
    int number2 = (rand() % 6) + 1;
    int number3 = (rand() % 6) + 1; // rand() = 0 - 32,767

    printf("%d\n", number1); 
    printf("%d\n", number2);
    printf("%d\n", number3);

    return 0;
}