#include <stdio.h>

double square(double x)
{
    // double result = x * x;
    // return result;
    return x * x;
}

int main()
{
    // return = returns a value back to calling function

    double x = square(3.14);
    printf("%lf", x);
}