//
// Created by catar on 6/15/2024.
//
#include <stdio.h>

int main() {
    int x;
    int y;

    printf("Introduceti doua numere: ");
    scanf("%d %d", &x, &y);
    if(x > y) {
        printf("Numarul cel mai mare este: %d", x);
    } else if(x < y) {
        printf("Numarul cel mai mare este: %d", y);
    }

    return 0;
}