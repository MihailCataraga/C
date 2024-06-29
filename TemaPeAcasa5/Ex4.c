//
// Created by Mihai Cataraga on 29.06.2024.
//
#include <stdio.h>
#define R 3
#define C 3

void elementeleMatriciiSarpePeColoane(int arr[R][C]) {
    for(int j = 0; j < R; j++) {
        if(j % 2 == 0) {
            for(int i = 0; i < C; i++) {
                printf("%d ", arr[i][j]);
            }
        } else{
            for(int i = R - 1; i >= 0; i--) {
                printf("%d ", arr[i][j]);
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
    elementeleMatriciiSarpePeColoane(arr);
    return 0;
}