#include <stdio.h>

int main(){

    // if statement are used to add some choices in program

    int age;

    printf("\nEnter your age : ");
    scanf("%d", &age);

    if (age >= 18)
    {
        printf("You're an adult now !");
    }
    else if(age ==0)
    {
        
    }
    else if (age < 0)
    {
        printf("THE UNBORN");
    }
    else
    {
        printf("Grow up! then you can have it!");
    }
    

    return 0;
}