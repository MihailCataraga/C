//
// Created by catar on 6/21/2024.
//
#include <stdio.h>
float mediaAritmetica(int arr[], int length) {
    float media;
    int sum = 0;
    for(int i = 0; i < length; i++) {
        sum += arr[i];

    }
    media = sum / length;
    return media;
}

int main() {
    int tablou[] = {4, 6, 2, 3, 10, 5};
    int length = sizeof(tablou) / sizeof(tablou[0]);
    float res = mediaAritmetica(tablou, length);
    printf("Media aritmetica este: %.2f.", res);
    return 0;
}