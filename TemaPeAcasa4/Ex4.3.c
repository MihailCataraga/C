//
// Created by catar on 6/22/2024.
//
#include <stdbool.h>
#include <stdio.h>

void verificaNumarul(int arr[], int length) {
    int number;
    bool exist = false;
    printf("Introduceti numarul pe care doriti sal verificati:");
    scanf("%d", &number);
    for(int i = 0; i < length; i++) {
        if(number == arr[i]) {
            exist = true;
            break;
        }
    }

    if(exist) {
        printf("Numarul introdus exista in tablou.");
    } else {
        printf("Numarul introdus nu exista in tablou.");
    }

}

int main() {
    int arr[] = {5, 6, 7, 1, 2, 9, 2};
    int length = sizeof(arr) / sizeof(arr[0]);
    verificaNumarul(arr, length);

    return 0;
}