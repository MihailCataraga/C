//
// Created by catar on 6/15/2024.
//
#include <stdio.h>

int main() {
    int luna;

    printf("Introduceti o luna intre 1 si 12:");
    scanf("%d", &luna);
    if(luna == 12 || luna == 1 || luna == 2) {
        printf("Anotimpul este iarna.");
    } else if(luna >= 3 && luna <= 5){
        printf("Anotimpul este primavara.");
    } else if(luna >= 6 && luna <= 8){
        printf("Anotimpul este vara.");
    } else if(luna >= 9 && luna <= 11){
        printf("Anotimpul este toamna.");
    } else {
        printf("Nu ati introdus o luna reala.");
    }

    return 0;
}