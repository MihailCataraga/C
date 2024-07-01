//
// Created by Mihai Cataraga on 30.06.2024.
//
#include <stdio.h>
#define R 3
#define C 3

void elementelePozitionateDeasupraDiagonaleiPrincipale(int m1[R][C]) {
    printf("[2]: ");
    for(int i = 0; i < R - 1; i++) {
        for(int j = i + 1; j < R; j++) {
            printf("%d ", m1[i][j]);
        }
    }
}

int main() {
    int m1[R][C] = {
            {1,2,3},
            {4,5,6},
            {7,8,9}
    };
    elementelePozitionateDeasupraDiagonaleiPrincipale(m1);
    return 0;
}