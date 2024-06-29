//
// Created by Mihai Cataraga on 29.06.2024.
//
#include <stdio.h>
#define R 3
#define C 3

void elementeleMatriciiPeColoane(int arr[R][C]) {
    for(int j = 0; j < R; j++) {
        for(int i = 0; i < C; i++) {
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
    elementeleMatriciiPeColoane(arr);
    return 0;
}