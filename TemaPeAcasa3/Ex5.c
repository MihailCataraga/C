//
// Created by catar on 6/19/2024.
//
#include <stdio.h>

int main() {
    int numar;
    printf("Introduceti un numar: " );
    scanf("%d", &numar);
    printf("\n");
    for(int i = 1; i <=10; i++) {
        int produs = numar * i;
        printf("Produsul dintre %d si %d este: %d. \n", numar, i, produs);
    }
    return 0;
}