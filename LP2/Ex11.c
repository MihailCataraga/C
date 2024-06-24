//
// Created by Mihai Cataraga on 23.06.2024.
//
#include <stdio.h>

void ceaMaiMareDif(int arr[], int length) {
    int mare = arr[0];
    int mic = arr[0];
    int dif;
    for(int i = 0; i < length; i++) {
        if(mare < arr[i]) {
            mare = arr[i];
        }else if(mic > arr[i]) {
            mic = arr[i];
        }
    }
    dif = mare - mic;
    printf("maxdiff=%d", dif);
}

int main() {
    int v1[]={35,78,30,200,42};
    int length = sizeof(v1) / sizeof(v1[0]);
    ceaMaiMareDif(v1, length);
    return 0;
}