//
// Created by Mihai Cataraga on 23.06.2024.
//
#include <limits.h>
#include <stdio.h>

void treiMicImpare(int arr[], int length) {
    int celMaiMare = 0;
    int mic1 = INT_MAX, mic2=INT_MAX, mic3=INT_MAX;
    for(int i = 0; i < length; i++) {
        if(arr[i] % 2 != 0) {
            if(arr[i] < mic1) {
                mic3 = mic2;
                mic2 = mic1;
                mic1 = arr[i];
            } else if(arr[i] < mic2 && arr[i] > mic1) {
                mic3 = mic2;
                mic2 = arr[i];
            } else if(arr[i] < mic3 && arr[i] != mic1 && arr[i] > mic2) {
                mic3 = arr[i];
            }
        }
    }
    printf("minodd1=%d\nminodd2=%d\nmin0dd3=%d", mic1, mic2, mic3);
}

int main() {
    int v1[]={3,5,1,8,9,2,7,10,11,0};
    int length = sizeof(v1) / sizeof(v1[0]);
    treiMicImpare(v1, length);
    return 0;
}