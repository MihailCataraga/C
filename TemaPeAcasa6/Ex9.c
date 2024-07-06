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
        list->values[i] = 10 - i;
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

void sortCrescator(Lista *list) {
    int temp;
    for(int i = 0; i < list->size; i++) {
        for(int j = 0; j < list->size - i - 1; j++) {
            if(list->values[j] > list->values[j + 1]) {
                temp = list->values[j];
                list->values[j] = list->values[j+1];
                list->values[j+1] = temp;
            }
        }
    }
}

int main() {
    Lista list;
    initElemList(&list);
    afisareaListei(&list);
    sortCrescator(&list);
    afisareaListei(&list);
    return 0;
}