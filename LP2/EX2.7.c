//
// Created by Mihai Cataraga on 29.06.2024.
//
#include <stdio.h>

void stergeNumarul(int arr[], int length, int num) {
    int position = 0;
    for(int i = 0; i < length; i++) {
        if(arr[i] == num) {
            position = i;
        }
    }
    for(int i = position; i < length - 1; i++) {
        arr[i] = arr[i + 1];
    }
    arr[length - 1] = 0;
    printf("v1[]={");
    for(int i = 0; i < length - 1; i++) {
        printf("%d,", arr[i]);
    }
    printf("\b}");
}

int main() {
    int v1[]={35,30,89,76,155,123};
    int num=76;
    int length = sizeof(v1) / sizeof(v1[0]);
    stergeNumarul(v1, length, num);
    return 0;
}