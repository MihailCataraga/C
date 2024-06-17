//
// Created by Mihai Cataraga on 16.06.2024.
//
#include <stdio.h>

int main() {
    int numNote;
    int numNoteIndividuale[10];
    printf("Care este numarul de note?");
    scanf("%d", &numNote);
    int note[numNote];
    for(int i = 0; i < numNote; i++) {
        printf("Introduceti nota %d: ", i + 1);
        scanf("%d", &note[i]);
    }
    for(int i = 0; i < numNote; i++) {

    }

    return 0;
}