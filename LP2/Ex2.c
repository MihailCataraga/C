//
// Created by Mihai Cataraga on 23.06.2024.
//
#include <stdio.h>

void treiCeleMaiMari(int arr[], int length) {
    int new[3] = {arr[0], arr[0], arr[0]};
    for(int i = 1; i < length; i++) {
        if(new[0] < arr[i]) {
            new[0] = arr[i];
        }
    }
    for(int i = 1; i < length; i++) {
        if(new[1] < arr[i] && arr[i] < new[0]) {
            new[1] = arr[i];
        }
    }
    for(int i = 1; i < length; i++) {
        if(new[2] < arr[i] && arr[i] < new[1]) {
            new[2] = arr[i];
        }
    }
    for(int i = 0; i < 3; i++) {
        printf("num%d=%d\n", i+1, new[i]);
    }
}

int main() {
    int v1[]={3,4,5,8,9,1,2,7,10};
    int length = sizeof(v1) / sizeof(v1[0]);
    treiCeleMaiMari(v1, length);
    return 0;
}