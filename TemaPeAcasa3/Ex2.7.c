//
// Created by catar on 6/19/2024.
//
#include <stdio.h>

int main() {
    int arr[5] = {3, 6, 10, 11, 2};
    int celMaiMare = arr[0];
    for(int i = 0; i < 5; i++) {
        if(arr[i] > celMaiMare) {
            celMaiMare = arr[i];
        }
    }
    printf("Cel mai mare numar este %d.", celMaiMare);
    return 0;
}