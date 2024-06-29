//
// Created by catar on 6/29/2024.
//
#include <stdio.h>
#define R 3
#define C 3

void elementulMaximDePeFiecareColoana(int arr[R][C]) {
    for(int j = 0; j < R; j++) {
        printf("Elementul maxim de pe coloana %d este: ", j + 1);
        for(int i = 0; i < C; i++) {
            if(i == C - 1) {
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
    elementulMaximDePeFiecareColoana(arr);
    return 0;
}