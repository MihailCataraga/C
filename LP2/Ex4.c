//
// Created by Mihai Cataraga on 23.06.2024.
//
#include <stdio.h>

void treiMicImpare(int arr[], int length) {
    int celMaiMare = arr[0];
    for(int i = 1; i < length; i++) {
        if(celMaiMare < arr[i]) {
            celMaiMare = arr[i];
        }
    }
    int new[3] = {celMaiMare, celMaiMare, celMaiMare};
    for(int i = 0; i < length; i++) {
        if(new[0] > arr[i] && arr[i] % 2 != 0) {
            new[0] = arr[i];
        }
    }
    for( int i = 0; i < length; i++) {
        if(new[1] > arr[i] && arr[i] % 2 != 0) {
            if(arr[i] > new[0]) {
                new[1] = arr[i];
            }
        }
    }
    for( int i = 0; i < length; i++) {
        if(new[2] > arr[i] && arr[i] % 2 != 0) {
            if(arr[i] > new[1]) {
                new[2] = arr[i];
            }
        }
    }

    for(int i = 0; i < 3; i++) {
        printf("minodd%d=%d\n", i + 1, new[i]);
    }
}

int main() {
    int v1[]={3,5,1,8,9,2,7,10,11,0};
    int length = sizeof(v1) / sizeof(v1[0]);
    treiMicImpare(v1, length);
    return 0;
}