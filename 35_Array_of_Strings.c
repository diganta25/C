#include <stdio.h>
#include <string.h>

int main()
{
    char cars[][10] = {"Mustang" , "BMW" , "Bugatti"};

    //cars[0] = "Tesla";
    strcpy(cars[0], "Tesla"); 

    for (int i = 0; i < sizeof(cars)/sizeof(cars[0]); i++)
    {
        printf("\n%s", cars[i]);
    }

    return 0;
}