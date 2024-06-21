//
// Created by catar on 6/19/2024.
//
#include <stdio.h>

int main() {
    char arr[10] = {'b', 'c', 'r', 'd', 'x'};
    int arr2[5];
    int j = 0;
    for(int i = 4; i >= 0; i--) {
        arr2[j] = arr[i];
        j++;
    }
    for(int i = 0; i < 5; i++) {
        printf("%c ", arr[i]);
    }
    printf("\n");
    for(int i = 0; i < 5; i++) {
        printf("%c ", arr2[i]);
    }
    return 0;
}