//deposit function

#include<stdio.h>

int deposit()
{
  int amount;
  int balance = 0;
  printf("Enter amount to be deposited: ");
  scanf(" %d", &amount); //taking amount to be deposited as input from user
  balance = balance + amount; //calculating balance amount
  return balance;
}