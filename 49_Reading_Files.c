#include <stdio.h>

int main()
{
    FILE *pF = fopen("C:\\Users\\A\\Desktop\\hello.txt", "r");
    char buffer[255];

    if(pF == NULL)
    {
        printf("Unable to open file\n");
    }
    else
    {
        printf("Lets read the contents of this file");
    }

    while (fgets(buffer, 255, pF) != NULL)
    {
        printf("%s", buffer);
    }
    

    fclose(pF);

    return 0;
}