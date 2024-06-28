//
// Created by catar on 6/28/2024.
//
#include <stdio.h>
#include <string.h>

void vocaleConsoane(char str[]) {
    int vowels = 0;
    int consonants = 0;
    for(int i = 0; i < strlen(str); i++) {
        if(str[i] >= 'A' && str[i] <= 'z') {
            if(str[i] == 'A' || str[i] == 'a' ||
               str[i] == 'E' || str[i] == 'e' ||
               str[i] == 'I' || str[i] == 'i' ||
               str[i] == 'O' || str[i] == 'o' ||
               str[i] == 'U' || str[i] == 'u') {
                vowels++;
            } else {
               consonants++;
            }
        }
    }
    printf("vowels=%d\nconsonants=%d", vowels, consonants);
}

int main() {
    char str[] = "Acesta este un exemplu.";
    vocaleConsoane(str);
    return 0;
}