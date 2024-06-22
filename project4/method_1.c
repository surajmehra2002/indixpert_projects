// Here the task 1 code of banking management systm

#include<stdio.h>
void main()
{

   long long int account_no;
   char name[20];
   int balance;

   
    create_account:
        printf("\nPlease enter 11 digit account number only: ");
        scanf("%lld", &account_no);

    if (account_no > 10000000000 && account_no <100000000000)
    {
            printf("Please enter your account holder name: ");
            scanf("%s", &name);
            
            input_balance:
            printf("Please enter balance (Opening account would be 500 minimum): ");
            scanf("%d", &balance);

            if (balance>=500)
            {
                printf("\n\n*****Thank you to join india bank***** \nyour account details:\n");
                printf("Account Number: %lld\n",account_no);
                printf("Account Holder Name: %s\n", name);
                printf("Account Balance: %d\n\n", balance);

            }
            else{
                goto input_balance;
            }
            
    }
   
    
    
    else
    {
        printf("Please enter valid account no");
        goto create_account;
    }   
    
}
   





