//
// Created by Mihai Cataraga on 16.06.2024.
//
#include <stdio.h>

int main() {
    int an;
    printf("Introduceti anul: ");
    scanf("%d", &an);

    if((an % 4 == 0 && an % 100 != 0) || an % 400 == 0) {
        printf("%d este un an bisect.", an);
    } else {
        printf("%d nu este un an bisect.", an);
    }
    return 0;
}