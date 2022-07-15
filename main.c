//AUTHOR: lazarus miumu gualdi
//COMPILER: C89
//LICENCE:  MIT
//DATE:     JULY 2022
//

#include<stdio.h>
//relational operators: > < >= <= == !=
//logical operators:&& || !
// control structures
// 1. selection/decision making/conditional - if


int main(){
	int choice = 0;
  int qty = 0;
  int total = 0;

     printf("Welcome to LAZARUS SNACK BAR.\n ");
  printf("$  Snack Menu  $ \n\n");
  printf("  && Please select the snack that you would like to purchase. && \n\n");
  printf("\t\t [1] french fries - sh 200.00\n");
  printf("\t\t [2] milk shake - sh 150\n");
  printf("\t\t [3] coffee - sh 80\n");



  printf("Enter your choice here : ");
  scanf("%d", &choice);


    switch (choice)
    {
    case 1:
        printf("french fries SELECTED, PLEASE! Enter the Quantity : ");
        scanf("%d", &qty);
        total = qty * 200;
        printf("Total Amount For Pay : %d", total);
        break;

    case 2:
        printf("MILK SHAKE, PLEASE! Enter the Quantity : ");
        scanf("%d", &qty);
        total = qty * 150;
        printf("Total Amount For Pay : %d", total);
        break;
    case 3:
        printf("COFFEE SELECTED, PLEASE! Enter the Quantity : ");
        scanf("%d", &qty);
        total = qty * 80;
        printf("Total Amount For Pay : %d", total);
        break;

    default:
        printf("We are Sorry, for this....");
        break;
    }
    return 0;
     printf("Thank You Very Much\n ");
  printf("&& welcome back. && \n\n");
}
