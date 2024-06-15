//
// Created by catar on 6/10/2024.
//
#include <stdio.h>

int main() {
    const int x = 4;
    for(int i = 0; i < x; i++) {
        for(int j = 0; j < x; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}