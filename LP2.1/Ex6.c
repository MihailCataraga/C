//
// Created by Mihai Cataraga on 30.06.2024.
//
#include <stdio.h>
#define R 3
#define C 3

void elementeleDeLaPeriferii(int m1[R][C]) {
    printf("[6]: ");
    printf("\n");
    for(int i = 0; i < R; i++) {
        if(i == 0 || i == R - 1) {
            for(int j = 0; j < R; j++) {
                printf("%d ", m1[i][j]);
            }
            printf("\n");
        } else {
            for(int j = 0; j < R; j++) {
                if(j == 0 || j == R - 1) {
                    printf("%d ", m1[i][j]);
                } else{
                    printf("  ");
                }
            }
            printf("\n");
        }
    }
}

int main() {
    int m1[R][C] = {
            {1,2,3},
            {4,5,6},
            {7,8,9}
    };
    elementeleDeLaPeriferii(m1);
    return 0;
}