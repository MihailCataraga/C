//
// Created by catar on 6/29/2024.
//
#include <stdio.h>
#define R 3
#define C 3

void sumaElementelorDiagonalaPrincipala(int arr[R][C]) {
    int sum = 0;
    for(int i = 0; i < R; i++) {
        sum+=arr[i][i];
    }
    printf("Suma elementelor de pe diagonala principala este: %d.", sum);
}

int main() {
    int arr[R][C] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    sumaElementelorDiagonalaPrincipala(arr);
    return 0;
}