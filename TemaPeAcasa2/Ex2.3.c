//
// Created by catar on 6/15/2024.
//
#include <stdio.h>

int main() {
    float celsius;

    printf("Introduceti temperatura in grade Celsius: ");
    scanf("%f", &celsius);

    float fahrenheit = (celsius * 9 / 5) + 32;

    printf("Temperatura in grade Fahrenheit este: %.2f\n", fahrenheit);

    return 0;
}