//
// Created by catar on 6/28/2024.
//
#include <stdio.h>

void unicElements(int arr[], int length) {
    int arrUnic[length];
    int esteUnic = 0;
    int position = 0;
    for(int i = 0; i < length; i++) {
        esteUnic = 1;
        for(int j = 0; j < position; j++) {
            if(arr[i] == arrUnic[j]) {
                esteUnic = 0;
                break;
            }
        }
        if(esteUnic) {
            arrUnic[position] = arr[i];
            position++;
        }
    }
    for(int i = 0; i < position; i++) {
        int count = 0;
        for(int j = 0; j < length; j++) {
            if(arrUnic[i] == arr[j]) {
                count++;
            }
        }
        printf("%d=%d \n", arrUnic[i], count);
    }
}

int main() {
    int v1[]={45,30,45,35,67,35,30,89,90,35};
    int length = sizeof(v1) / sizeof(v1[0]);
    unicElements(v1, length);
    return 0;
}