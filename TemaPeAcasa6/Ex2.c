#include <stdio.h>
#include <string.h>
//
// Created by catar on 7/7/2024.
//
struct Carte {
    char titlu[25];
    char autor[25];
    int anPublicare;
};

int main() {
    struct Carte Carte;
    strcpy(Carte.titlu, "Ion");
    strcpy(Carte.autor, "Liviu Rebreanu");
    Carte.anPublicare = 1920;

    printf("Nume: %s\n", Carte.titlu);
    printf("Prenume: %s\n", Carte.autor);
    printf("Varsta: %d\n", Carte.anPublicare);
    return 0;
}