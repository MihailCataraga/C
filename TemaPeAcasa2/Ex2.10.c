//
// Created by catar on 6/15/2024.
//
#include <stdio.h>

int main() {
    int ani;

    printf("Introduceti varsta dumneavoastra: ");
    scanf("%d", &ani);
    int batai = ani * 365 * 24 * 60 * 70;
    printf("Inima dumneavoatra a batut pana acum de %d.", batai);

    return 0;
}