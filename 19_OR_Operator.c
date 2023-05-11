#include <stdio.h>
#include <stdbool.h>

int main(){

    // logical operator = || (OR) checks if at lest one condition is true

float temp = 50;
bool snowy = true;

if(temp <= 0 || temp >= 40 || snowy)
{
    printf("\nThe weather is bad!");
}
else{
    printf("\nThe weather is good!");
}
   return 0;
}