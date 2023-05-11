#include<stdio.h>
#include<string.h>

int main(){

    char name[25]; //bytes
    int age;

    printf("What's your name?\n");
    //scanf("%s", &name);
    fgets(name, 25, stdin); //for a name which contain blank spaces include newline as well

    name[strlen(name)-1] = '\0';

    printf("How old are you?\n");
    scanf("%d", &age);

    printf("Hello! %s. Hope you're doing well!\n", name);
    printf("You're %d years young!", age);
    return 0;
}