//
// Created by catar on 6/19/2024.
//
#include <stdio.h>
#include <string.h>

int main() {
    char arr[5][10] = {"Mihai", "Ion", "Alexandru", "Marcel", "Victor"};
    int celMaiLung = 0;
    int index;
    for(int i = 0; i < 5; i++) {
        int length = strlen(arr[i]);
        if(length > celMaiLung) {
            celMaiLung = length;
            index = i;
        }
    }
    printf("Cel mai lung este %s, are o lungime de %d caractere.", arr[index], celMaiLung);
    return 0;
}
