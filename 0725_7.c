#include <stdio.h>

int main()
{
    int choice =1, sum = 0, num = 0, u_price;

    while(choice != 0)
    {
        printf("Choice of Menu\n");
        printf("1. Americano(3,000 won)\n");
        printf("2. Ice Americano(3,500 won)\n");
        printf("3. Cafe Latte(3,800 won)\n");
        printf("4. Dezawa(700 won)\n");
        printf("5. Caramel Macchiato(4,300 won)\n");
        printf("6. Blue Lemonade(3,500 won)\n");
        printf("0. End");
        scanf("%d", &choice);
        printf("input glasses : \n");
        scanf("%d", &num);


    switch(choice)
    {
         
        case 1:
            u_price = 3000;
            break;
    
        case 2:
           u_price = 3500;
            break;
       
        case 3:
           u_price = 3800;
            break;
       
        case 4:
           u_price = 700;
            break;       
     
        case 5:
           u_price = 4300;
            break;
   
        case 6:
            u_price = 3500;
            break;          
        default :
            printf("choice is 0. Remaining count is not calculated.\n");
            break;
        
           
        }
        sum = sum + (u_price * num);

    }   
    printf("Total = %d", sum);
}
