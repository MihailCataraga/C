//
// Created by catar on 6/28/2024.
//
#include <limits.h>
#include <math.h>
#include <stdio.h>

void DouaNumereAdunateMaiAproapeDeZero(int arr[], int length) {
    int num1 = 0;
    int num2 = 0;
    int temp = INT_MAX;
    int sum = 0;
    for(int i = 0; i < length - 1; i++) {
        for(int j = i + 1; j < length; j++) {
            if(arr[i] + arr[j] < temp) {
                sum = arr[i] + arr[j];
                temp = abs(sum);
                num1 = arr[i];
                num2 = arr[j];
            }
        }
    }
    printf("nums (%d,%d) ~ 0", num1, num2);
}

int main() {
    int v1[]={8,3,1,9,-4,7,10,3,9};
    int length = sizeof(v1) / sizeof(v1[0]);
    DouaNumereAdunateMaiAproapeDeZero(v1, length);
    return 0;
}