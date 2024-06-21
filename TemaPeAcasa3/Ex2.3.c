//
// Created by catar on 6/19/2024.
//
#include <stdio.h>

int main() {
    // Folosind pointer

    // char* arr[4] = {"Mihai", "Irina", "Mihaela", "Mihai"};
    // for(int i = 0; i < 4; i++) {
    //     printf("%s \n", arr[i]);
    // }

    char arr[4][10] = {"Mihai", "Irina", "Mihaela", "Mihai"};
    for(int i = 0; i < 4; i++) {
        printf("%s \n", arr[i]);
    }
    return 0;
}