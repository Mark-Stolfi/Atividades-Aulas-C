//
// Created by Mark_stolf on 19/08/2025.
//
#include <stdio.h>

int main() {
    int vet[18];
    int matriz[3][6];
    int contador = 0;

    for (int i = 0; i < 18; i++) {
        printf("Insira um numero inteiro (%d/18): ", i + 1);
        scanf("%d", &vet[i]);
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 6; j++) {
            matriz[i][j] = vet[contador];
            contador++;
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 6; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
