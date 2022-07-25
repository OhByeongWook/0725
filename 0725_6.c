#include <stdio.h>

int main()
{
    int i = 1, num, sum = 0; //짝수할 땐 0부터 홀수일 땐 1부터

    printf("1~n of sum.\n");
    printf("input number: ");

    scanf("%d", &num);

    while(i<=num)
    {
        sum = sum + i;
        i=i+2;
    }
    
    printf("%d", sum);
    return 0;

}