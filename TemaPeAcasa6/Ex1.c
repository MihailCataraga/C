#include <stdio.h>
#include <string.h>
//
// Created by catar on 7/7/2024.
//
struct Student {
    char nume[25];
    char prenume[25];
    int varsta;
};

int main() {
    struct Student Student;
    strcpy(Student.nume, "Mihai");
    strcpy(Student.prenume, "Cataraga");
    Student.varsta = 27;

    printf("Nume: %s\n", Student.nume);
    printf("Prenume: %s\n", Student.prenume);
    printf("Varsta: %d\n", Student.varsta);
    return 0;
}