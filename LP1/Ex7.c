//
// Created by Mihai Cataraga on 16.06.2024.
//
#include <stdio.h>

int main() {
    int numSec;

    int ore;
    int min;
    int sec;
    printf("Scrieti numarul de secunde: ");
    scanf("%d", &numSec);

    ore = numSec / 60 / 60;
    min = (numSec - ore * 60 * 60) / 60;
    sec = numSec - ore * 60 * 60 - min * 60;

    printf("Numarul de ore %d, minunte %d, secunde %d \n", ore, min, sec);
    return 0;
}