//
// Created by Mihai Cataraga on 29.06.2024.
//
#include <stdio.h>
#define R 3
#define C 3

void elementeleMatricii(int arr[R][C]) {
    for(int i = 0; i < R; i++) {
        for(int j = 0; j < C; j++) {
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
    elementeleMatricii(arr);
    return 0;
}