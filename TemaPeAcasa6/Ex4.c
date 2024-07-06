#include <stdio.h>
//
// Created by catar on 7/7/2024.
//
struct Dreptunghi {
    float lungime;
    float latime;
};

int main() {
    struct Dreptunghi dreptunghi1 = {14, 12};
    float aria = dreptunghi1.lungime * dreptunghi1.latime;
    printf("Aria dreptunghiului este: %.2f", aria);

    return 0;
}