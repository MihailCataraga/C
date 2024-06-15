//
// Created by catar on 6/15/2024.
//
#include <stdio.h>

int main() {
    int x;


    printf("Introduceti un numar numere: ");
    scanf("%d", &x);
    if(x > 0) {
        printf("Numarul este pozitiv.");
    } else if(x < 0) {
        printf("Numarul este negativ.");
    } else if(x == 0) {
        printf("Numarul este egal cu 0.");
    }

    return 0;
}