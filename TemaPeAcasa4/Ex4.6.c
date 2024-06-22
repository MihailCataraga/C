//
// Created by catar on 6/22/2024.
//
#include <stdio.h>

void rotireDreapta(int arr[], int length) {
    int n;
    printf("Introduceti numarul de rotiri:");
    scanf("%d", &n);
    n = n % length;
    int temp[length];
    for(int i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    for(int i = 0; i < n; i++) {
        temp[i] = arr[length - n + i];
    }
    for(int i = n; i < length; i++) {
        temp[i] = arr[i - n];
    }
    for(int i = 0; i < length; i++) {
        arr[i] = temp[i];
    }
    for(int i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int length = sizeof(arr) / sizeof(arr[0]);
    rotireDreapta(arr, length);

    return 0;
}