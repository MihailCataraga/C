//
// Created by Mihai Cataraga on 23.06.2024.
//
#include <stdio.h>

void separareaNumerilor(int arr[], int length) {
    printf("elem odd even\n");
    for(int i = 0; i < length; i++) {
        if(arr[i] % 2 != 0) {
            printf("[%d]   %d\n", i + 1, arr[i]);
        }else if(arr[i] % 2 == 0) {
            printf("[%d]       %d\n", i+1, arr[i]);
        }
    }
}

int main() {
    int v1[]={1,2,3,4,5};
    int length = sizeof(v1) / sizeof(v1[0]);
    separareaNumerilor(v1, length);
    return 0;
}