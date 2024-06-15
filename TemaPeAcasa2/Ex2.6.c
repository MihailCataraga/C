//
// Created by catar on 6/15/2024.
//
#include <stdio.h>

int main() {
    int x;
    int y;
    int z;

    printf("Introduceti 3 numere: ");
    scanf("%d %d %d", &x, &y, &z);

    float media = (x + y + z) / 3.0;

    printf("Media numerelor este: %.2f\n", media);

    return 0;
}