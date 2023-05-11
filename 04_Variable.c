#include<stdio.h>

int main(){
/* variable = Allocate space in memory to store a value
              We refer to a vaiable's name to access the stored value.
              That variable now behaves as if it was the value it contains
              BUT need to declare what type of data we are storing.
*/

int x;          // declaration
x = 123;        // initialization
int y = 321;    // declaration + initialization

int age = 43;           //integer
float gpa = 4.03;       //floating point number
char grade = 'C';       //single charcter
char name[] = "Viktor"; //array of characters

printf("Priviet %s\n", name);
printf("You are %d years young :)\n", age);
printf("Your avg. grade is %c\n", grade);
printf("Your gpa is %f", gpa);

return 0;
}