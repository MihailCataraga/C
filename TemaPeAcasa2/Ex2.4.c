//
// Created by catar on 6/15/2024.
//
#include <stdio.h>

int main() {
    int x;
    int y;

    printf("Introduceti doua numere: ");
    scanf("%d %d", &x, &y);

    int res = x * y;

    printf("Produsul numerelor este: %d\n", res);

    return 0;
}