//
// Created by Mihai Cataraga on 30.06.2024.
//
#include <stdio.h>
#define R 3
#define C 3

void diagonalaSecundara(int m1[R][C]) {
    printf("[4]: ");
    for(int i = 0; i  < R; i++) {
        for(int j = R - 1; j >= 0; j--) {
            if(i + j == 2) {
                printf("%d ", m1[i][j]);
            }
        }
    }
}

int main() {
    int m1[R][C] = {
            {1,2,3},
            {4,5,6},
            {7,8,9}
    };
    diagonalaSecundara(m1);
    return 0;
}