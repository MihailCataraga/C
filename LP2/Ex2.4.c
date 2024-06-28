//
// Created by catar on 6/28/2024.
//
#include <stdio.h>

void intersectiaADoiVectori(int arr1[], int arr2[], int length1, int length2) {
    int v3[length1+length2];
    int position = 0;
    for(int i = 0; i < length1; i++) {
        for(int j = 0; j < length2; j++) {
            if(arr1[i] == arr2[j]) {
                v3[position] = arr1[i];
                position++;
            }
        }
    }
    printf("v3[]={");
    for(int i = 0; i < position; i++) {
        printf("%d,", v3[i]);
    }
    printf("\b}");
}

int main() {
    int v1[]={2,3,1,7};
    int v2[]={3,5,8,2,4,6};
    int length1 = sizeof(v1) / sizeof(v1[0]);
    int length2 = sizeof(v2) / sizeof(v2[0]);
    intersectiaADoiVectori(v1, v2, length1, length2);
    return 0;
}