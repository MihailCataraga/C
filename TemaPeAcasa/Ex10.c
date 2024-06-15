//
// Created by catar on 6/10/2024.
//
#include <stdio.h>

int main() {
    const int numbers[] = {2, 4, 6, 8, 10};
    int sum = 0;
    for(int i = 0; i < sizeof(numbers) / sizeof(numbers[0]); i++) {
        sum += numbers[i];
    }
    printf("%d", sum);
    return 0;
}