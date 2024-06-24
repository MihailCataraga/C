//
// Created by Mihai Cataraga on 23.06.2024.
//
#include <stdio.h>

void celMaiDes(int arr[], int length) {
    int num = 0;
    int celMaiIntalnit = 0;
    for(int i = 0; i < length - 1; i++) {
        int temp = 1;
        for(int j = i + 1; j < length; j++) {
            if(arr[i] == arr[j]) {
                temp++;
            }
        }
        if(temp > celMaiIntalnit) {
            celMaiIntalnit = temp;
            num = arr[i];
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