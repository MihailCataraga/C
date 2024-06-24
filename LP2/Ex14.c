//
// Created by catar on 6/24/2024.
//
#include <stdio.h>
#include <string.h>

void reversString() {
    char str[20];
    printf("Introduceti un string:");
    scanf("%s", str);
    int length = strlen(str);
    char temp;
    for(int i = 0; i < length / 2; i++) {
        temp = str[length - i - 1];
        str[length - i -1] = str[i];
        str[i] = temp;
    }
    printf("%s", str);
}

int main() {
    reversString();
    return 0;
}