//
// Created by catar on 6/15/2024.
//
#include <stdio.h>

int main() {
    int lungime;
    int latime;

    printf("Introduceti lungimea si latimea dreptunghiului: ");
    scanf("%d %d", &lungime, &latime);

    int aria = lungime * latime;

    printf("Aria dreptunghiului este: %d\n", aria);

    return 0;
}