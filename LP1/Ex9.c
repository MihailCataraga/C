//
// Created by Mihai Cataraga on 16.06.2024.
//
#include <stdio.h>

int main() {
    int note[] = {0,0,0,0,0,0,0,0,0,0};
    int numarNote;
    int noteleIntroduse[numarNote];
    printf("Introduceti numarul de note: ");
    scanf("%d", &numarNote);
    for(int i = 0; i < numarNote; i++) {
        int nota;
        printf("Introduceti nota %d: ", i + 1);
        scanf("%d", &nota);
        for(int j = 1; j <= 10; j++) {
            if(nota == j) {
                note[nota - 1]++;
            }
        }
    }

    // Aflam care este numarul de note la fel
    int maxNoteLaFel = 0;
    for(int i = 0; i < 10; i++) {
        if(maxNoteLaFel < note[i]) {
            maxNoteLaFel++;
        }
    }

    printf("\n");

    for(int i = 1; i <= 10; i++) {
        printf("%d : ", i);
        for(int j = 0; j < note[i - 1]; j++) {
            printf("*");
        }
        for(int z = 0; z < (maxNoteLaFel - note[i - 1]); z++) {
            printf("_");
        }
        printf("\n");
    }

    return 0;
}