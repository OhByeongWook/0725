#include <stdio.h>
#include <string.h>

int main()
{
    char ch[20];

    printf("Please press any key. Press ""q"" to exit. \n");
    do
    {
        gets(ch);
    }while (strcmp(ch,"q"));
    printf("End");
    return 0;
}