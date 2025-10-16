//Bank ATM
/*
Name:Catherine Ndung'u
Reg no:PA106/G/28730/25
Description:Bank ATM withdrawals to account balance of 0
*/

#include <stdio.h>

int main() {
    int balance = 730;  // starting balance
    int withdrawal;

    while (balance > 0) {
        printf("Enter withdrawal amount: ");
        scanf("%d", &withdrawal);
        if (withdrawal <= balance) {
            balance -= withdrawal;
            printf("Remaining balance: %d\n", balance);
        } else {
            printf("Insufficient balance.\n");
        }
    }
    printf("Your balance is zero or negative. Ending transaction.\n");
    return 0;
}