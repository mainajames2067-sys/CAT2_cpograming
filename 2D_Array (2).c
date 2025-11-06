/*
Name: James maina 
Reg no:CT101/G/26470/25
Date:6/11/2025
Description:A 2D array
*/
#include <stdio.h>

int main() {
    int scores[2][2] = {
        {65, 92},
        {84, 72}
    };
    // Or use the other values
    // int scores[2][2] = {
    //     {35, 70},
    //     {59, 67}
    // };

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            printf("%d ", scores[i][j]);
        }
        printf("\n");
    }
    return 0;
}