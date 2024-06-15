//
// Created by catar on 6/15/2024.
//
#include <stdio.h>

int main() {
    int nota;

    printf("Introduceti nota primita:");
    scanf("%d", &nota);
    if(nota >= 1 && nota <= 4) {
        printf("Nesatisfcator.");
    } else if(nota >= 5 && nota <= 10){
        printf("Satisfacator.");
    } else {
        printf("Nu ati introdus o nota intre 1-10.");
    }

    return 0;
}