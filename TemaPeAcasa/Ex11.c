//
// Created by catar on 6/10/2024.
//
#include <stdio.h>

int main() {
    const int number = 50;
    printf("Divizorii numarului %d sunt: \n", number);
    for (int i = 1; i <= number; i++) {
        if (number % i == 0) {
            printf("%d\n", i);
        }
    }
    return 0;
}
