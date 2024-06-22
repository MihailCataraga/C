//
// Created by catar on 6/22/2024.
//
#include <math.h>
#include <stdio.h>

void verificareaPatratelorPerfecte(int arr[], int length) {
    int count = 0;
    int radacina;
    for(int i = 0; i < length; i++) {
        radacina = sqrt(arr[i]);
        if(radacina * radacina == arr[i]) {
            count++;
        }
    }
    printf("Numarul de patrate perfecte este: %d", count);
}

int main() {
    int arr[] = {9, 12, 16, 25, 30, 36, 40, 49, 81};
    int length = sizeof(arr) / sizeof(arr[0]);

    verificareaPatratelorPerfecte(arr, length);

    return 0;
}