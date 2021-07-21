//User details function

#include<stdio.h>

void details()
{
  //taking the required inputs from user
  char name[20],designation[20];
  int age,salary;
  printf("Enter your name: ");
  scanf(" %s",&name);
  printf("Enter your age: ");
  scanf(" %d",&age);
  printf("Enter your designation: ");
  scanf(" %s",&designation);
  printf("Enter your salary: ");
  scanf(" %d",&salary);

  //displaying the user information
  printf("\nName: %s",name);
  printf("\nAge: %d",age);
  printf("\nDesignation: %s",designation);
  printf("\nSalary: %d",salary);
  printf("\n");

}