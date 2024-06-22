#include<stdio.h>
int main ()
{
    int task, exit=1;


    printf("\n\n***********Project-2     Banking Management System ************\n");
    printf("\n1- Create Account");
    printf("\n2- Deposite");
    printf("\n3- Withdraw");
    printf("\n4- Check Balance");
    printf("\n0- Exit\n");

    

    while (exit!=0)
    {
        printf("Please Enter the task number: ");
        scanf("%d",&task);

        if (task==1)
        {
            // create_account();
        }

        else if (task==2)
        {
            // deposite();
        }

        else if (task==3)
        {
            // withdraw();
        }

        else if (task==4)
        {
            // check_balance();
        }
        else if (task==0)
        {
            exit = task;
        }

        else
        {
            printf("\nOhh! Please Enter valid task no\n");
            
        }
    }

    printf("You have left");

    return 0;
}