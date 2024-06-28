//
// Created by catar on 6/28/2024.
//
#include <stdio.h>

void careDouaNumereAleUnuiVectorAdunateSuntEgaleCuUnNumarIntrodusDeLaTastatura(int arr[], int length) {
    int num;
    printf("Introduceti un numar:");
    scanf("%d", &num);
    for(int i = 0; i < length - 1; i++) {
        for(int j = i + 1; j < length; j++) {
            if(arr[i] + arr[j] == num) {
                printf("nums(%d,%d) at [%d,%d] \n", arr[i], arr[j], i + 1, j + 1);
            }
        }
    }
}

int main() {
    int v1[]={4,2,3,5,1,3,8};
    int length = sizeof(v1) / sizeof(v1[0]);
    careDouaNumereAleUnuiVectorAdunateSuntEgaleCuUnNumarIntrodusDeLaTastatura(v1, length);
    return 0;
}