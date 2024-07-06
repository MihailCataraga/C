#include <stdio.h>
//
// Created by catar on 7/7/2024.
//
struct Punct {
    float x;
    float y;
};

int main() {
    struct Punct punct1 = {10.2, 12.5};
    struct Punct punct2 = {4.0, 7.8};
    printf("Punctul 1 se afla la %.2f, %.2f\nPunctul 2 se afla la %.2f, %.2f", punct1.x, punct1.y, punct2.x, punct2.y);
    return 0;
}