//A do while loop of c program
//A password system
/*
Name:CATHERINE NDUNG'U
Reg no:PA106/G/28730/25
Description:A password system with the correct password 1234 
*/

#include <stdio.h>
#include <string.h>

int main() {
    char password[20];
    const char correctPassword[] = "1234";

    do {
        printf("Enter password: ");
        scanf("%s", password);
    } while (strcmp(password, correctPassword) != 0);

    printf("Access Granted\n");
    return 0;
}