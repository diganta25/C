#include <stdio.h>

// arguments = anything which we are passing into a function also 
//             it requires a matching set of parameters

// parameters = are what a function expects when it's invoked
// functions can't see whats inside other function: they can talk to each other
// while using arguments

void birthday(char name[], int age)
{
    printf("\nHappy Birthday dear %s!", name);
    printf("\nYou're %d yeras old!", age);
}

int main()
{
    char name[] = "Victor"; // always put "" in string
    int age = 20;
    
    birthday(name, age);

    return 0;
}