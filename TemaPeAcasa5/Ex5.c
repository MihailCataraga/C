//
// Created by Mihai Cataraga on 29.06.2024.
//
#include <stdio.h>
#define R 3
#define C 3

void diagonaleleSecundare(int arr[R][C]) {
    for(int k = 0; k < R; k++) {
        int sum = k;
        for(int i = 0; i < R; i++) {
            for(int j = 0; j < R; j++) {
                if(i+j==sum) {
                    printf("%d ", arr[i][j]);
                }
            }
        }
        printf("\n");
    }
    for(int k = 1; k < R; k++) {
        int sum = R - 1 + k;
        for(int i = 0; i < R; i++) {
            for(int j = 0; j < R; j++) {
                if(i + j == sum) {
                    printf("%d ", arr[i][j]);
                }
            }
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
    diagonaleleSecundare(arr);
    return 0;
}