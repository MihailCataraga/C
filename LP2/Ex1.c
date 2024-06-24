//
// Created by Mihai Cataraga on 23.06.2024.
//
#include <stdio.h>

void mareMic(int arr[], int length) {
    int mic = arr[0];
    int mare = arr[0];
    for(int i = 1; i < length; i++) {
        if(mic > arr[i]) {
            mic = arr[i];
        }
        if(mare < arr[i]) {
            mare = arr[i];
        }
    }
    printf("min=%d\n", mic);
    printf("mare=%d\n", mare);
}

int main() {
    int v1[]={3,5,8,6,2,7,10,11};
    int length = sizeof(v1) / sizeof(v1[0]);
    mareMic(v1, length);
    return 0;
}