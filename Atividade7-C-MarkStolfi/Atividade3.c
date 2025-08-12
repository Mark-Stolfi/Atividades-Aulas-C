//
// Created by Mark_stolf on 12/08/2025.
//
//
// Created by Mark_stolf on 12/08/2025.
//
#include <stdio.h>
#include <stdlib.h>

int main() {
    int array[10];
    int i, maior=0, pos=0;

    for (i = 0; i < 10; i++) {
        printf("%d: Digite um numero:",i+1);
        scanf("%d", &array[i]);
        if (array[i] > maior) {
            maior = array[i];
            pos = i + 1;
        }
    }
    printf("Maior numero: %d | Posicao: %d", maior, pos);
    return 0;
}
