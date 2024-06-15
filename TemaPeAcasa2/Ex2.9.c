//
// Created by catar on 6/15/2024.
//
#include <stdio.h>

int main() {
    int kilometri;

    printf("Introduceti numarul de kilometri: ");
    scanf("%d", &kilometri);
    int metri = kilometri * 1000;
    printf("%d kilometri in metri sunt: %d.", kilometri, metri);

    return 0;
}