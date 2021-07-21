//withdraw function

#include<stdio.h>
int withdraw(int deposit_amount)
{
  int balance_updated = 0;
  int amount;
  printf("Enter amount to be withdrawn: ");
  scanf(" %d", &amount); //taking amount to be withdrawn as input from user
  balance_updated = deposit_amount - amount; //calculating balance amount
  return balance_updated;
}