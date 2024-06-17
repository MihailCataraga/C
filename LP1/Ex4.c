//
// Created by Mihai Cataraga on 16.06.2024.
//
#include <stdio.h>

int main() {
    int salariulAnual;
    int scorCriedit;
    int salariulLunar;
    printf("Introduceti salariul anual si scorul de credit");
    scanf("%d %d", &salariulAnual, &scorCriedit);
    salariulLunar = salariulAnual / 12;
    if(salariulLunar >= 20000 && scorCriedit >= 600) {
        printf("Sunteti elegibil pentru un imprumut.");
    } else {
        printf("Nu sunteti elegibil pentru un imprumut.");
    }
    return 0;
}