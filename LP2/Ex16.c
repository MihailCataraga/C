//
// Created by catar on 6/24/2024.
//
#include <stdio.h>
#include <string.h>

void pozitiileUnuiCaracter(char str[], int length, char c) {
    printf("pos=");
    for(int i = 0; i < length; i++) {
        if(str[i] == c) {
            printf("%d,", i);
        }
    }
    printf("\b");
    printf(" ");

}

int main() {
    char str[] = "programare";
    char c = 'r';
    int length = strlen(str);
    pozitiileUnuiCaracter(str, length, c);
    return 0;
}