#include <stdio.h>
#include <math.h>

int main()
{

    char operator;
    double num1;
    double num2;
    double result;

    printf("\nEnter the operator (+ - * / r p): ");
    scanf("%c", &operator);

if (operator == "+", "-", "*", "/", "p")
    {
        printf("\nEnter number 1 : ");
        scanf("%lf", &num1);

        printf("\nEnter number 2 : ");
        scanf("%lf", &num2);
    }
else if(operator == "r")
    {
        printf("\nEnter number 1 : ");
        scanf("%lf", &num1);
    }

switch (operator)
    {
    case '+':
        result = num1 + num2;
        printf("\nResult : %lf", result);
        break;

    case '-':
        result = num1 - num2;
        printf("\nResult : %lf", result);
        break;

    case '*':
        result = num1 * num2;
        printf("\nResult : %lf", result);
        break;

    case '/':
        result = num1 / num2;
        printf("\nResult : %lf", result);
        break;

    case 'r':
        result = sqrt(num1);
        printf("\nResult : %lf", result);
        break;

    case 'p':
        result = pow(num1, num2);
        printf("\nResult : %lf", result);
        break;

    default:
        printf("\n%c is not a valid operator", operator);
        break;
    }

    return 0;
}