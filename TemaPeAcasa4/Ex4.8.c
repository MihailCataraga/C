//
// Created by catar on 6/22/2024.
//
#include <stdio.h>

int numarTripleteCuSumaZero(int arr[], int length) {
    int count = 0;

    for (int i = 0; i < length - 2; i++) {
        for (int j = i + 1; j < length - 1; j++) {
            for (int k = j + 1; k < length; k++) {
                if (arr[i] + arr[j] + arr[k] == 0) {
                    count++;
                }
            }
        }
    }

    return count;
}

int main() {
    int arr[] = { -1, 0, 1, 2, -1, -4, 7, -7};
    int length = sizeof(arr) / sizeof(arr[0]);

    int count = numarTripleteCuSumaZero(arr, length);
    printf("Numărul de triplete cu suma zero: %d\n", count);

    return 0;
}