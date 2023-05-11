#include <stdio.h>
#include <stdbool.h>

int main(){

// logical operator = ! (NOT) reverses the state of condition

bool sunny = false;

if (!sunny == true)
{
    printf("\nIt's Sunny outside");
}
else
{
    printf("\nIt's cloudy outside");
}



return 0;
}