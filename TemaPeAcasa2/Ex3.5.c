//
// Created by catar on 6/15/2024.
//
#include <stdio.h>

int main() {
    int age;

    printf("Introduceti varsta dumneavoastra: ");
    scanf("%d", &age);
    if(age < 18) {
        printf("Minor.");
    } else {
        printf("Major.");
    }

    return 0;
}