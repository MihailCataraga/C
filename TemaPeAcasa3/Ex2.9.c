//
// Created by catar on 6/19/2024.
//
#include <stdio.h>

int main() {
    int arr[5] = {3, 6, 10, 1, 2};
    int celMaiMare = arr[0];
    for(int i = 0; i < 5; i++) {
        if(arr[i] < celMaiMare) {
            printf("Nu este sortat crescator.");
            break;
        }
    }
    return 0;
}