//
// Created by catar on 6/22/2024.
//
#include <stdio.h>

void verificareaAparitiei(int arr[], int length) {
    float minAparitii = length / 3.00;
    int count;
    for(int i = 0; i < length; i++) {
        count = 1;
        for(int j = i + 1; j < length; j++) {
            if(arr[i] == arr[j]) {
                count++;
            }
            if(count >= minAparitii) {
                printf("Elementul %d apare de %d. Mai mult ca n/3=%.2f.", arr[i], count, minAparitii);
                return;
            }
        }
    }
    printf("Nu exista un element care sa apara mai mult ca n/3=%.2f.", minAparitii);
}

int main() {
    int arr[] = {1, 2, 1, 3, 4, 1, 1, 2, 3};
    int length = sizeof(arr) / sizeof(arr[0]);

    verificareaAparitiei(arr, length);

    return 0;
}