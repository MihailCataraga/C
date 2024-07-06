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
    for(int i = 0; i < MAX_LIMITS - 1; i++) {
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

void addUnElementLaSfarsit(Lista *list, int element) {
    if(MAX_LIMITS > list->size) {
        list->values[list->size] = element;
        list->size++;
    }else {
        printf("Lista este plina.\n");
    }
}

int main() {
    Lista list;
    initElemList(&list);
    afisareaListei(&list);
    addUnElementLaSfarsit(&list, 100);
    afisareaListei(&list);
    return 0;
}