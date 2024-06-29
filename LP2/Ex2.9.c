//
// Created by catar on 6/29/2024.
//
#include <stdio.h>

void adaugaUnNumarIntrunVector(int arr[], int length) {
    int newNum;
    int pos;
    printf("Introduceti numarul pe care doriti sal adaugati:");
    scanf("%d", &newNum);
    printf("Indicati pozitia unde va fi adaugat numarul:");
    scanf("%d", &pos);
    for(int i = length; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos - 1] = newNum;
    for(int i = 0; i < length + 1; i++) {
        printf("%d ", arr[i]);
    }
}

int main() {
    int v1[]={54,2,6,7,8,65,21,91};
    int length = sizeof(v1) / sizeof(v1[0]);
    adaugaUnNumarIntrunVector(v1, length);
    return 0;
}