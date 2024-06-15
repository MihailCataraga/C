//
// Created by catar on 6/15/2024.
//
#include <stdio.h>

int main() {
    int ziua;

    printf("Introduceti un numar intre 1 - 7:");
    scanf("%d", &ziua);
    if(ziua == 1) {
        printf("Luni.");
    } else if(ziua == 2){
        printf("Marti.");
    } else if(ziua == 3){
        printf("Miercuri.");
    } else if(ziua == 4){
        printf("Joi.");
    } else if(ziua == 5){
        printf("Vineri.");
    } else if(ziua == 6){
        printf("Sambata.");
    } else if(ziua == 7){
        printf("Duminica.");
    } else {
        printf("Ati introdus un numar gresit.");
    }

    return 0;
}