//
// Created by catar on 6/22/2024.
//
#include <stdio.h>
int diferentaCelMaiMareSiMic(int arr[], int length) {
    int diferenta;
    int celMaiMic = arr[0];
    int celMaiMare = arr[0];
    for(int i = 1; i < length; i++) {
        if(celMaiMic > arr[i]) {
            celMaiMic = arr[i];
        }
    }
    for(int i = 1; i < length; i++) {
        if(celMaiMare < arr[i]) {
            celMaiMare = arr[i];
        }
    }
    diferenta = celMaiMare - celMaiMic;

    return diferenta;
}

int main() {
    int arr[] = {5, 3, 1, 2, 6, 8};
    int length = sizeof(arr) / sizeof(arr[0]);
    int res = diferentaCelMaiMareSiMic(arr, length);
    printf("Diferenta dintre cel mai mare si cel mai mic element al tabloului este: %d", res);

    return 0;
}