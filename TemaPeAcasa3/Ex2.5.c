//
// Created by catar on 6/19/2024.
//
#include <stdio.h>

int main() {
    char arr[10] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'};
    int vocaleNr = 0;
    for(int i = 0; i < 10; i++) {
        if(arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'o' || arr[i] == 'u') {
            vocaleNr++;
        }
    }
    printf("Numarul de vocale este %d.", vocaleNr);
}