//
// Created by Mihai Cataraga on 23.06.2024.
//
#include <stdio.h>

void treiElemInvers(int arr[], int length) {
    int temp = arr[0];
    arr[0] = arr[2];
    arr[2] = temp;
    for(int i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }
}

int main() {
    int v1[]={1,2,3,4,5,6,7};
    int length = sizeof(v1) / sizeof(v1[0]);
    treiElemInvers(v1, length);
    return 0;
}