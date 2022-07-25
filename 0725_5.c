#include <stdio.h>

int main()
{
    int i, num;

    printf("multiplication table.\n");
    printf("multiplication number : ");

    scanf("%d", &num);

    for(i=1; i < 10; i++);
    {
        printf("%d x %d = %d\n", num, i, num * i);
    }
}