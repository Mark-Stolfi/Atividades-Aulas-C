//
// Created by mark_stolf on 13/08/2025.
//
#include <stdio.h>
int main() {
    char loja[8][100], produto[4][100];
    char matriz[8][4];
    int preco[4];
    printf("Digite o nome da loja e seus produtos e respectivos preços: \n");
    for (int i = 0; i < 2; i++) {
        printf("Loja : ");
        scanf("%s", loja[i]);
        for (int j = 0; j < 4; j++) {
            printf("\nproduto: ");
            scanf("%s", produto[i]);
            printf("\npreco: ");
            scanf("%s", preco[i]);
        }

    }

}