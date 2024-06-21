//
// Created by catar on 6/19/2024.
//
#include <stdio.h>

int main() {
    int arr[10];
    for(int i = 1; i <= 10; i++) {
        arr[i-1]=i;
    }
    printf("arr[10] = {");
    for(int i = 0; i < 9; i++) {
        printf("%d, ", arr[i]);
    }
    printf("%d", arr[10-1]);
    printf("};");
    return 0;
}