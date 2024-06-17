#include<stdio.h>

int main(){

    int choice, qty, bill;
    char cont;
    int pizza = 180, burger = 100, dosa = 120, idli = 50;
    
    do
    {
        printf("\n-----Menu-----\n");
        printf("1. Pizza - Rs.%d\n", pizza);
        printf("2. Burger - Rs.%d\n", burger);
        printf("3. Dosa - Rs.%d\n", dosa);
        printf("4. Idli - Rs.%d\n", idli);
        
        printf("Choose your number of item: ");
        scanf("%d", &choice);
        
        switch(choice)
        {
            case 1:
                printf("You selected Pizza\n");
                break;
            case 2:
                printf("You selected Burger\n");
                break;
            case 3:
                printf("You selected Dosa\n");
                break;
            case 4:
                printf("You selected Idli\n");
                break;
            default:
                printf("Enter valid choice!!\n");
        }
        
        if (choice <= 4)
        {
            printf("Enter qty: ");
            scanf("%d", &qty);
            
            switch (choice)
            {
                case 1:
                    bill += pizza * qty;
                    break;
                case 2:
                    bill += burger * qty;
                    break;
                case 3:
                    bill += dosa * qty;
                    break;
                case 4:
                    bill += idli * qty;
                    break;
            }
            
            printf("Your bill amount is: %d\n", bill);
        }
        
        printf("\nDo you want to continue? (y/n): ");
        scanf(" %c", &cont);
    }
    while (cont == 'y' || cont == 'Y');
    
    return 0;
}

