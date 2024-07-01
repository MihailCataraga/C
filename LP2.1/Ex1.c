//
// Created by Mihai Cataraga on 30.06.2024.
//
#include <stdio.h>
#define R 3
#define C 3

void diagonalaPrincipala(int m1[R][C]) {
    printf("[1]: ");
    for(int i = 0; i < R; i++) {
        printf("%d ", m1[i][i]);
    }
}

int main() {
    int m1[R][C] = {
            {1,2,3},
            {4,5,6},
            {7,8,9}
    };
    diagonalaPrincipala(m1);
    return 0;
}