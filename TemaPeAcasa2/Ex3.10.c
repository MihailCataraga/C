//
// Created by catar on 6/16/2024.
//
#include <stdio.h>

int main() {
    int age;

    printf("Introduceti varsta: ");
    scanf("%d", &age);
    if(age >= 0 && age <=12) {
        printf("Copil.");
    } else if(age >= 13 && age <=19){
        printf("Adolescent.");
    } else if(age >= 20 && age <=74){
        printf("Adult.");
    } else if(age >= 75){
        printf("Senior.");
    }

    return 0;
}