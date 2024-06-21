//
// Created by catar on 6/19/2024.
//
#include <stdio.h>

int main() {
    for(int i = 1; i <= 50; i++) {
        if(i % 3 == 0 && i % 5 == 0) {
            printf("Numarul %d este divizibil cu 3, dar si cu 5.\n", i);
        }
    }
    return 0;
}