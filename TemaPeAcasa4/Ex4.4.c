//
// Created by catar on 6/22/2024.
//
#include <stdio.h>

void deleteElements(int arr[], int length) {
    int n;
    printf("Introduceti un numar (1-9) care va sterge primele elemente dintrun tablou:");
    scanf("%d", &n);
    for(int i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Prima varianta prin rupere.
    // for(int i = n; i < length; i++) {
    //     printf("%d ", arr[i]);
    // }

    // Varianta 2 prin mutarea cu locul.
    for(int i = 0; i < length; i++) {
        arr[i] = arr[i+n];
    }
    for(int i = 0; i < length - n; i++) {
        printf("%d ", arr[i]);
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int length = sizeof(arr) / sizeof(arr[0]);

    deleteElements(arr, length);
    return 0;
}