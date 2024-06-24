//
// Created by Mihai Cataraga on 23.06.2024.
//
#include <stdio.h>

void mareParImpar(int arr[], int length) {
    int impar = arr[0];
    int par = arr[0];
    for(int i = 0; i < length; i++) {
        if(par < arr[i] && arr[i] % 2 == 0) {
            par = arr[i];
        }
    }
    for(int i = 0; i < length; i++) {
        if(impar < arr[i] && arr[i] % 2 != 0 && arr[i] < par) {
            impar = arr[i];
        }
    }
    printf("odd=%d", impar);
    printf("even=%d", par);
}

int main() {
    int v1[]={3,4,5,8,9,1,2,7,10,0};
    int length = sizeof(v1) / sizeof(v1[0]);
    mareParImpar(v1, length);
    return 0;
}