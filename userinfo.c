//A C PROGRAM PROMPTING A USER TO INPUT HIS/HER INFORMATION

/*
Name :Catherine Ndung'u
Reg No:PA106/G/28730/25
Description:A program to display personal details
*/

#include <stdio.h>
int main()
{
       float height;
	   double id_number;	
	   double bank_balance;
	   
	   //user'information input
	   
	   printf("Enter your height in meters: ");
	   scanf("%f", &height);
	   
	   printf("Enter your ID Number: ");
	   scanf("%d", &id_number);
	   
	   printf("Enter your Bank Balance: ");
	   scanf("%d", &bank_balance);
	   
	   //user's information output
	   
	    printf("THE USERS INFORMATION \n");
        printf("Height : %2.0f meters\n",height);
        printf("ID Number: %d\n", id_number);
        printf("Bank Balance: %2d\n",bank_balance);
	   
	return 0;
}