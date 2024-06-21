//
// Created by catar on 6/22/2024.
//
#include <stdio.h>
void revers(int arr[], int length) {
    int temp;
    for(int i = 0; i < length / 2; i++) {
        temp = arr[i];
        arr[i] = arr[length - i - 1];
        arr[length - i - 1] = temp;
    }
}

int main() {
    int arr[] = {4, 5, 2, 4, 6};
    int length = sizeof(arr) / sizeof(arr[0]);
    for(int i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }
    revers(arr, length);
    printf("\n");
    for(int i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}