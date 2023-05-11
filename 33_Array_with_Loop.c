#include <stdio.h>

int main()
{
    double prices[] = {5.0, 10.0, 15.0, 25.0, 20.0, 30.0};

    // printf("%.2lf", prices[0]);
    printf("%d bytes", sizeof(prices));

    for(int i = 0; i < sizeof(prices)/sizeof(prices[0]); i++)
    {
        printf("\n$%.2lf", prices[i]);
    }
    return 0;
}