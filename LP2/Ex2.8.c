//
// Created by Mihai Cataraga on 29.06.2024.
//
#include <stdio.h>

void celMaiMareSubSirCrescator(int arr[], int length) {
    int count = 1;
    // int tempIndex = 0;
    int celMaiLung = 1;
    int index = 0;
    for(int i = 0; i < length; i++) {
        if(arr[i] == arr[i-1] + 1) {
            count++;
            if(count > celMaiLung) {
                index = i;
                celMaiLung = count;
            }
        } else {

            count = 1;
        }
    }
    printf("Max ascending substring has %d elements: ", celMaiLung);
    for(int i = index - celMaiLung + 1; i <= index; i++) {
        printf("%d ", arr[i]);
    }
}

int main() {
    int v1[]={3,1,4,5,6,7,1,2,3};
    int length = sizeof(v1) / sizeof(v1[0]);
    celMaiMareSubSirCrescator(v1, length);
    return 0;
}