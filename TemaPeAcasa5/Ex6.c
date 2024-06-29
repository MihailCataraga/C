//
// Created by Mihai Cataraga on 29.06.2024.
//
#include <stdio.h>
#define R 3
#define C 3

void diagonalelePrincipale(int arr[R][C]) {
    for(int k = 0; k < R; k++) {
        for(int i = 0, j = R - 1 - k; j < R; i++, j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    for (int k = 1; k < R; k++) {
        for (int i = k, j = 0; i < R; i++, j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int arr[R][C] = {
            {1,2,3},
            {4,5,6},
            {7,8,9}
    };
    diagonalelePrincipale(arr);
    return 0;
}