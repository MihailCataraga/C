//
// Created by catar on 6/28/2024.
//
#include <stdio.h>

void reuniuneDoiVectori(int arr1[], int arr2[], int lengthV1, int lengthV2) {
    int v3ToTal[lengthV1+lengthV2];
    int v3[lengthV1+lengthV2];
    int unic = 0;
    int position = 0;
    for(int i = 0; i < lengthV1; i++) {
        v3ToTal[i] = arr1[i];
    }
    for(int i = 0; i < lengthV2; i++) {
        v3ToTal[lengthV1 + i] = arr2[i];
    }

    for(int i = 0; i < lengthV1 + lengthV2; i++) {
        unic = 1;
        for(int j = 0; j < position; j++) {
            if(v3ToTal[i] == v3[j]) {
                unic = 0;
                break;
            }
        }
        if(unic) {
            v3[position] = v3ToTal[i];
            position++;
        }
    }

    for(int i = 0; i < position; i++) {
        printf("%d ", v3[i]);
    }
}

int main() {
    int v1[]={2,3,1,7};
    int v2[]={3,5,8,2,4,6};
    int length1 = sizeof(v1) / sizeof(v1[0]);
    int length2 = sizeof(v2) / sizeof(v2[0]);
    reuniuneDoiVectori(v1, v2, length1, length2);
    return 0;
}