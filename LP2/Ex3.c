//
// Created by Mihai Cataraga on 23.06.2024.
//
#include <stdio.h>

void sumMedia(int arr[], int length) {
    float sum = 0;
    float media;
    for(int i = 0; i < length; i++) {
        sum += arr[i];
    }
    media = sum / length;
    printf("sum=%.0f\n", sum);
    printf("avh=%.2f", media);
}

int main() {
    int v1[]={5,2,7,6,5,3};
    int length = sizeof(v1) / sizeof(v1[0]);
    sumMedia(v1, length);
    return 0;
}