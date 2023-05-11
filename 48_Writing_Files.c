#include <stdio.h>

int main()
{
    // "w" = write
    // "r" = read
    // "a" = append

    
    FILE *pF = fopen("C:\\Users\\A\\Desktop\\text.txt" , "w");

    fprintf(pF, "\nHope you're doing well!");

    fclose(pF);
    

    if (remove("text.txt") == 0)
    {
        printf("That file was deleted successfully");
    }
    else
    {
        printf("That file was NOT deleted !");
    }
    

    
    return 0;
}