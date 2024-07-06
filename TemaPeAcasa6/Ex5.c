//
// Created by catar on 7/7/2024.
//
#define MAX_LIMITS 10
#include <stdio.h>

typedef struct {
    int values[MAX_LIMITS];
    int size;
} Lista;

void initCinciElemList(Lista *list) {
    list->size = 0;
    for(int i = 0; i < 5; i++) {
        list->values[i] = i+1;
        list->size++;
    }
}

void afisareaListei(Lista *list) {
    printf("Elementele listei sunt:\n");
    for(int i = 0; i < list->size; i++) {
        printf("%d ", list->values[i]);
    }
}

int main() {
    Lista list;
    initCinciElemList(&list);
    afisareaListei(&list);
    return 0;
}