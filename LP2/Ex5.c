//
// Created by Mihai Cataraga on 23.06.2024.
//
#include <stdio.h>

void repetitiaUnuiNum(int arr[], int length) {
    int num;
    int count = 0;
    printf("Introduceti un numar pentru a vedea daca acesta se repeta in vector:");
    scanf("%d", &num);
    for(int i = 0; i < length; i++) {
        if(num == arr[i]) {
            count++;
            printf("num %d at v[%d]\n", num, i + 1);
        }
    }
    printf("Numarul introdus sa repetat de %d ori.", count);
}

int main() {
    int v1[]={1,3,4,3,8};
    int length = sizeof(v1) / sizeof(v1[0]);
    repetitiaUnuiNum(v1, length);
    return 0;
}