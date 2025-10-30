//weekly reveneu tracker
/*
name:catherine ndung'u
reg no: PA106/G/28730/25
description:1D Array of hotel manangement system
*/

#include <stdio.h>

int main() {
    float revenue[7], total = 0, average;
    int i;

    printf("Enter revenue for each day of the week:\n");
    for (i = 0; i < 7; i++) {
        printf("Day %d: ", i + 1);
        scanf("%f", &revenue[i]);
        total += revenue[i];
    }

    average = total / 7;

    printf("\nTotal Weekly Revenue: %.2f\n", total);
    printf("Average Daily Revenue: %.2f\n", average);

    return 0;
}
