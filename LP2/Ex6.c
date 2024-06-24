//
// Created by Mihai Cataraga on 23.06.2024.
//
#include <stdio.h>

void numAndSum(int arr[], int length) {
    int numpos = 0;
    int numneg = 0;
    int sumpos = 0;
    int sumneg = 0;
    for(int i = 0; i < length; i++) {
        if(arr[i] > 0) {
            numpos++;
            sumpos += arr[i];
        }
        if(arr[i] < 0) {
            numneg++;
            sumneg += arr[i];
        }
    }
    printf("numpos=%d & sumpos=%d", numpos, sumpos);
    printf("numneg=%d & sumneg=%d", numneg, sumneg);
}

int main() {
    int v1[]={1,-2,4,-6,7,-1,3};
    int length = sizeof(v1) / sizeof(v1[0]);
    numAndSum(v1, length);
    return 0;
}