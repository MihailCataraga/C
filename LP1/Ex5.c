//
// Created by Mihai Cataraga on 16.06.2024.
//
#include <stdio.h>

int main() {
    int nota;
    printf("Introduceti o nota de la 1 la 10.");
    scanf("%d", &nota);
    if(nota <= 4) {
        printf("Insuficient");
    } else if(nota >= 5 && nota <= 6) {
        printf("Suficient");
    } else if(nota >= 7 && nota <= 8) {
        printf("Bine");
    } else if(nota >= 9 && nota <= 10) {
        printf("Foarte bine");
    } else if( nota < 1 || nota > 10) {
        printf("Ati introdus o nota gresita.");
    }

    return 0;
}