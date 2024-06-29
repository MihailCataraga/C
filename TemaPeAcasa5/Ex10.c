//
// Created by catar on 6/30/2024.
//
#include <stdio.h>
#define R 3
#define C 3

void mediaElementelorSituateSubDiagonalaPrincipala(int arr[R][C]) {
    int sum = 0;
    float count = 0;
    float avg = 0;
    for(int i = 1; i < R; i++) {
        for(int j = 0; j < i; j++) {
            count++;
            sum+=arr[i][j];
        }
    }
    avg = sum / count;
    printf("Media elementelor situate sub diagonalei principala este: %.2f", avg);
}

int main() {
    int arr[R][C] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    mediaElementelorSituateSubDiagonalaPrincipala(arr);
    return 0;
}