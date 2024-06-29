//
// Created by catar on 6/29/2024.
//
#include <stdio.h>
#define R 3
#define C 3

void elementulMaximDePeFiecareRand(int arr[R][C]) {
    for(int i = 0; i < R; i++) {
        printf("Elementul maxim de pe randul %d este: ", i + 1);
        for(int j = 0; j < C; j++) {
            if(j == C - 1) {
                printf("%d", arr[i][j]);
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
    elementulMaximDePeFiecareRand(arr);
    return 0;
}