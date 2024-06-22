//
// Created by catar on 6/22/2024.
//
#include <stdio.h>

int eliminaDublurile(int arr[], int length) {
    int j = 0;
    for(int i = 1; i < length; i++) {
        if(arr[j] != arr[i]) {
            j++;
            arr[j] = arr[i];
        }
    }
    int newLength = j + 1;

    return newLength;
}

int main() {
    int arr[] = {1, 2, 2, 3, 4, 4, 5, 6, 7, 7};
    int length = sizeof(arr) / sizeof(arr[0]);
    int newLength = eliminaDublurile(arr, length);
    printf("Dupa eliminarea elementelor dupicate, sirul are %d elemente.", newLength);

    return 0;
}