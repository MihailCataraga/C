//
// Created by catar on 6/15/2024.
//
#include <stdio.h>

int main() {
    const float G = 0.0000000000667430;
    int m1 = 50;
    int m2 = 75;
    int r = 3;
    float f = G * ((m1 * m2) / r * r);
    printf("Forta de atractie gravitationala este: %.11f", f);
    return 0;
}