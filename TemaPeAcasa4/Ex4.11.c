//
// Created by catar on 6/22/2024.
//
#include <math.h>
#include <stdio.h>

void lungimeaSecventeiDeNumereConsecutive(int arr[], int length) {
    int ceaMaiLunga = 0;
    int temp = 1;
    for(int i = 0; i < length; i++) {
        if(arr[i] + 1 == arr[i + 1]) {
            temp++;
        } else {
            if(ceaMaiLunga < temp) {
                ceaMaiLunga = temp;
                temp = 1;
            } else {
                temp = 1;
            }
        }
    }
    printf("Cea mai lunga secventa de numere cosecutive este: %d", ceaMaiLunga);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 7, 8, 9, 10, 12};
    int length = sizeof(arr) / sizeof(arr[0]);

    lungimeaSecventeiDeNumereConsecutive(arr, length);

    return 0;
}