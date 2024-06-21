//
// Created by catar on 6/19/2024.
//
#include <stdio.h>

int main() {
    char arr[5];
    // Folosind cod ASCII
    for(int i = 0; i <= 4; i++) {
        arr[i] = i + 65;
    }
    printf("arr[5] = {");
    for(int i = 0; i <= 3; i++) {
        printf("%c, ", arr[i]);
    }
    printf("%c", arr[5-1]);
    printf("};");
    return 0;
}