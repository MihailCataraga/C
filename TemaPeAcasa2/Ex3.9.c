//
// Created by catar on 6/16/2024.
//
#include <stdio.h>

int main() {
    int num;

    printf("Introduceti un numar: ");
    scanf("%d", &num);
    if(num > 0) {
        printf("Numarul este pozitiv.");
    } else if(num < 0){
        printf("Numarul este negativ.");
    } else if(num == 0){
        printf("Numarul este zero.");
    }

    return 0;
}