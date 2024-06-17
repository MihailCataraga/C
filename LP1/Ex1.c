//
// Created by Mihai Cataraga on 16.06.2024.
//
#include <stdio.h>

int main() {
    int salariu;
    int impozit;
    printf("Introduceti salariul anual: ");
    scanf("%d", &salariu);
    if(salariu <= 200000) {
        printf("Salariul dumneavoastra este %d, iar impozitul este 0", salariu);
    } else if (salariu >= 200001 && salariu < 350000) {
        impozit = salariu / 100 * 10;
        printf("Salariul dumneavoastra este %d, iar impozitul este %d", salariu, impozit);
    } else if (salariu >= 350000) {
        impozit = salariu / 100 * 15;
        printf("Salariul dumneavoastra este %d, iar impozitul este %d", salariu, impozit);
    }
    return 0;
}