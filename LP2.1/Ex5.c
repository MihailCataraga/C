//
// Created by Mihai Cataraga on 30.06.2024.
//
#include <stdio.h>
#define R 3
#define C 3

void elementeleUneiMatriciDeSubDiagonalaPrincipala(int m1[R][C]) {
    printf("[5]: ");
    for(int i = 1; i < R; i++) {
        for(int j = 0; j < i; j++) {
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
    elementeleUneiMatriciDeSubDiagonalaPrincipala(m1);
    return 0;
}