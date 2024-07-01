//
// Created by Mihai Cataraga on 30.06.2024.
//
#include <stdio.h>
#define R 5
#define C 5

void rotireaMatricei90deg(int m1[R][C], int matrix[R][C]) {
    for(int i = 0; i < R; i++) {
        for(int j = 0; j < C; j++) {
            matrix[j][R - 1 - i] = m1[i][j];
        }
    }

    for(int i = 0; i < R; i++) {
        for(int j = 0; j < C; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int m1[R][C] = {
            {0,0,1,0,0},
            {0,0,1,0,0},
            {0,0,1,0,0},
            {0,0,1,0,0},
            {0,0,1,0,0}
    };
    int matrix[R][C];
    rotireaMatricei90deg(m1, matrix);
    return 0;
}