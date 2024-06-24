//
// Created by Mihai Cataraga on 23.06.2024.
//
#include <stdio.h>

void revers(int arr[], int length) {
    int temp;
    for(int i = 0; i < length / 2; i++) {
        temp = arr[length - i - 1];
        arr[length - i - 1] = arr[i];
        arr[i] = temp;
    }
    for(int i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }
}

int main() {
    int v1[]={1,2,3,4,5,6,7};
    int length = sizeof(v1) / sizeof(v1[0]);
    revers(v1, length);
    return 0;
}