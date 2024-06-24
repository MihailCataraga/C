//
// Created by Mihai Cataraga on 23.06.2024.
//
#include <stdio.h>

void sumaElementelor(int arr[], int length) {
    int sum = 0;
    for(int i = 0; i < length; i++) {
        if(arr[i] >= -2 && arr[i] <= 4) {
            sum += arr[i];
        }
    }

    printf("sumrange=%d", sum);
}

int main() {
    int v1[]={2,-1,6,4,-3,7,-2,0,9,2};
    int length = sizeof(v1) / sizeof(v1[0]);
    sumaElementelor(v1, length);
    return 0;
}