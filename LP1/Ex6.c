//
// Created by Mihai Cataraga on 16.06.2024.
//
#include <stdio.h>

int main() {
    float distanta;
    float combustibil;
    float consum;
    float consumPerSuta;
    printf("Introduceti distanta in km si cantitatea de combustuibil in litri: ");
    scanf("%f %f", &distanta, &combustibil);
    consum = combustibil / distanta;
    consumPerSuta = consum * 100;
    printf("Consumul mediu de carburant per 100km este: %.2f.", consumPerSuta);
    return 0;
}