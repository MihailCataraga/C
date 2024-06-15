//
// Created by catar on 6/10/2024.
//
#include <stdio.h>

int main() {
    char result[3][3] = {
        {'o', 'x', 'x'},
        {'o', 'x', 'o'},
        {'x', 'o', 'x'}
    };
    printf("Grila rezultata a jocului Tic-Tac-Toe:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%c ", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}