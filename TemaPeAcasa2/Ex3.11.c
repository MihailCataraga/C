//
// Created by catar on 6/16/2024.
//
#include <stdio.h>

int main() {
    int ziua;

    printf("Introduceti ziua: ");
    scanf("%d", &ziua);
    if(ziua >= 1 && ziua <= 5) {
        printf("Este zi lucratoare.");
    } else if(ziua >= 6 && ziua <= 7){
        printf("Weekend.");
    }

    return 0;
}