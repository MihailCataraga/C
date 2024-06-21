//
// Created by catar on 6/19/2024.
//
#include <stdio.h>

int main() {
    int arr[10];
    for(int i = 0; i < 10; i++) {
        arr[i] = i * 3;
        printf("%d, ", arr[i]);
    }
    int sum;
    for(int i = 0; i < 10; i++) {
        sum += arr[i];
    }
    printf("\nSuma este %d.", sum);
    return 0;
}