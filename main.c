/*An ATM Program which takes user details, amount to be deposited and amount to
be withdrawn as inputs from user and displays them, also calculating and displaying
the balance amount left in their account after withdrawal */ 

//ATM Program Main file

#include<stdio.h>
#include<stdlib.h>
#include "atm_functions.h" //including functions header file

//main program
int main()
{
  int op,deposit_amount;
  do {
  printf("\nWELCOME TO ATM\n");
  printf("\n1.)Enter Details \n2.)Deposit \n3.)Withdraw \n4.)Exit \nEnter your option: ");
  scanf(" %d",&op);

  switch(op) {

       case 1: details();
               break;

       case 2: deposit_amount = deposit();  //calling deposit function
               printf("Balance amount: ");
               printf("%d",deposit_amount);
               break;

       case 3: printf("Balance amount: %d",withdraw(deposit_amount)); //calling withdraw function
               break;

       case 4: exit(0);
               break;

       default: printf("Invalid Option");
                break;
   }
  } while(op<=4);

 return 0;
}
//End of the program