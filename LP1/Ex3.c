//
// Created by Mihai Cataraga on 16.06.2024.
//
# include <stdio.h>

int main() {
    int pizza;
    int pretPizza;
    int sumaTotala;
    int costulFinal;
    int reducere;
    printf("Introduceti numarul de pizza si pretul per pizza");
    scanf("%d %d", &pizza, &pretPizza);
    sumaTotala = pizza * pretPizza;
    if(sumaTotala > 750) {
        reducere = sumaTotala / 100 * 15;
        costulFinal = sumaTotala - reducere;
        printf("Costul total este: %d", costulFinal);
    } else {
        costulFinal = pizza * pretPizza;
        printf("Costul total este: %d", costulFinal);
    }
    return 0;
}