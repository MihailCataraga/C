//
// Created by catar on 6/30/2024.
//
#include <stdio.h>
#define R 3
#define C 3

void mediaElementelorSituateDeasupraDiagonalaPrincipala(int arr[R][C]) {
    int sum = 0;
    float count = 0;
    float avg = 0;
    for(int i = 0; i < R - 1; i++) {
        for(int j = i+1; j < C; j++) {
            count++;
            sum+=arr[i][j];
        }
    }
    avg = sum / count;
    printf("Media elementelor situate deasupra diagonalei principala este: %.2f", avg);
}

int main() {
    int arr[R][C] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    mediaElementelorSituateDeasupraDiagonalaPrincipala(arr);
    return 0;
}