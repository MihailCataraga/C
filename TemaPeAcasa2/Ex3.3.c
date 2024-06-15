//
// Created by catar on 6/15/2024.
//
#include <stdio.h>

int main() {
    int x;
    int y;
    int z;

    printf("Introduceti trei numere: ");
    scanf("%d %d %d", &x, &y, &z);
    if(x > y && x > z) {
        printf("Numarul cel mai mare este: %d", x);
    } else if(x < y && z < y) {
        printf("Numarul cel mai mare este: %d", y);
    } else if(x < z && y < z) {
        printf("Numarul cel mai mare este: %d", z);
    }

    return 0;
}