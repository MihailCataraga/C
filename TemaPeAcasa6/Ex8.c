//
// Created by catar on 7/7/2024.
//
#define MAX_LIMITS 10
#include <stdio.h>

typedef struct {
    int values[MAX_LIMITS];
    int size;
} Lista;

void initElemList(Lista *list) {
    list->size = 0;
    for(int i = 0; i <= MAX_LIMITS - 1; i++) {
        list->values[i] = i+1;
        list->size++;
    }
}

void afisareaListei(Lista *list) {
    printf("Elementele listei sunt:\n");
    for(int i = 0; i < list->size; i++) {
        printf("%d ", list->values[i]);
    }
    printf("\n");
}

void addElemInPosSpecifica(Lista *list, int pos, int elem) {
    list->values[pos - 1] = elem;
}

int main() {
    Lista list;
    initElemList(&list);
    afisareaListei(&list);
    addElemInPosSpecifica(&list, 5, 20);
    afisareaListei(&list);
    return 0;
}