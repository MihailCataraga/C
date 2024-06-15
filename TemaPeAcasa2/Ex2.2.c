//
// Created by catar on 6/15/2024.
//
#include <stdio.h>

int main() {
    int num1;
    int num2;
    printf("Introduceti doua numere: ");
    scanf("%d %d", &num1, &num2);
    int res = num1 + num2;
    printf("Suma numerelor introduse este: %d.", res);
    return 0;
}