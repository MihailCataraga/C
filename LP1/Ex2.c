//
// Created by Mihai Cataraga on 16.06.2024.
//
#include <stdio.h>

int main() {
    int ore;
    int suma;
    printf("Introduceti numarul de ore: ");
    scanf("%d", &ore);
    if(ore <= 2) {
        suma = ore * 50;
        printf("Costul total al parcarii este %d", suma);
    } else if(ore > 2 && ore <= 5) {
        suma = 2 * 50 + (ore - 2) * 25;
        printf("Costul total al parcarii este %d", suma);
    } else if (ore > 5) {
        suma = 2 * 50 + 3 * 25 + (ore - 5) * 15;
        printf("Costul total al parcarii este %d", suma);
    }
    return 0;
}