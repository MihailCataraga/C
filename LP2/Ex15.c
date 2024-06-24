//
// Created by catar on 6/24/2024.
//
#include <stdio.h>
#include <string.h>

void numarCuvinte(char str[], int length) {
    // Pornim de la 1 deoarece chiar daca nu este " ", deja este un cuvant.
    int count = 1;
    for(int i = 0; i < length; i++) {
        if(str[i] == ' ') {
            count++;
        }
    }
    printf("%d words", count);
}

int main() {
    char str[] = "Acesta este un exemplu.";
    int length = strlen(str);
    numarCuvinte(str, length);
    return 0;
}