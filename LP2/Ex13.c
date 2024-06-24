//
// Created by Mihai Cataraga on 23.06.2024.
//
#include <stdio.h>

void celMaiDes(int arr[], int length) {
    int temp = 0;
    int num;
    int celMaiIntalnit = 0;
    for(int i = 0; i < length - 1; i++) {
        for(int j = 1; j < length; j++) {
            if(arr[i] == arr[j]) {
                temp++;
                num = arr[i];
            }
        }
        if(temp > celMaiIntalnit) {
            celMaiIntalnit = temp;
        }
    }
    printf("num %d is repeated %d times", num, celMaiIntalnit);
}

int main() {
    int v1[]={1,2,3,2,5,2,5};
    int length = sizeof(v1) / sizeof(v1[0]);
    celMaiDes(v1, length);
    return 0;
}