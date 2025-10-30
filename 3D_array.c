//multiple branches
/*
name: catherine ndung'u
reg no: PA106/G/28730/25
description:3D Array hotel manangement
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int chain[3][5][10];
    int branch, floor, room;
    int totalOccupied = 0;

    srand(time(0));

    for (branch = 0; branch < 3; branch++) {
        for (floor = 0; floor < 5; floor++) {
            for (room = 0; room < 10; room++) {
                chain[branch][floor][room] = rand() % 2; // 1 or 0
                if (chain[branch][floor][room] == 1)
                    totalOccupied++;
            }
        }
    }

    printf("Total Occupied Rooms Across All Branches: %d\n", totalOccupied);

    return 0;
}
