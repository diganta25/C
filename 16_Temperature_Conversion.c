#include<stdio.h>
#include<ctype.h>

int main(){

    char unit;
    float temp;

    printf("\nIs the temperature is in (F) or (C)? : ");
    scanf("%c", &unit);

    unit = toupper(unit);

    if (unit == 'C')
    {
        printf("\nEnter the temperature in Cesius: ");
        scanf("%f", &temp);
        temp = (temp * 9 / 5) + 32;
        printf("\nThe temperature in Farenheit is %.2f F", temp);
    }
    else if(unit == 'F')
    {
        printf("\nEnter the temperature in Farenheit: ");
        scanf("%f", &temp);
        temp = ((temp - 32) * 5) / 9;
        printf("\nThe temperature in Cesius is %.2f C", temp);
    }
    else
    {
        printf("\n%c is not a valid unit of temperature !", unit);
    }
    
    return 0;
}