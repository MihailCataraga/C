//
// Created by catar on 6/15/2024.
//
#include <stdio.h>

int main() {
    int x;
    int y;
    char operatia;

    printf("Introduceti doua numere si tipul operatiei (+, -, *, /): ");
    scanf("%d %d %c", &x, &y, &operatia);
    if(operatia == '+') {
        int res = x + y;
        printf("Rezultatul este: %d", res);
    } else if(operatia == '-') {
        int res = x - y;
        printf("Rezultatul este: %d", res);
    } else if(operatia == '*') {
        int res = x * y;
        printf("Rezultatul este: %d", res);
    } else if(operatia == '/') {
        int res = x / y;
        printf("Rezultatul este: %d", res);
    } else {
        printf("Ati introdus o operatiune nevalida.");
    }

    return 0;
}