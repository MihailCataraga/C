//
// Created by catar on 6/29/2024.
//
#include <limits.h>
#include <stdio.h>

void mediaCeluiMaiMicSubsir(int arr[], int length) {
    int celMaiMic = INT_MAX;
    int sum = 0;
    int avg = 0;
    int count = 1;
    int index = 0;
    for(int i = 0; i < length; i++) {
        if(arr[i] == arr[i-1] + 1) {
            count++;
            if(count < celMaiMic && count > 1) {
                index = i-1;
                celMaiMic = count;
            }

        } else {

            count = 1;
        }
    }
    printf("%d and %d and %d", celMaiMic, index, avg);
}

int main() {
    int v1[]={3,1,4,5,6,7,1,2,3};
    int length = sizeof(v1) / sizeof(v1[0]);
    mediaCeluiMaiMicSubsir(v1, length);
    return 0;
}