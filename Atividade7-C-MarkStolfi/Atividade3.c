//
// Created by Mark_stolf on 12/08/2025.
//
#include <stdio.h>

int main() {
    int numeros[10];
    int contador_maiores = 0;
    int maior_que_cinquenta[10] = {0};

    for (int i = 0; i < 10; i++) {
        printf("Digite o %d.o numero: ", i + 1);
        scanf("%d", &numeros[i]);

        if (numeros[i] > 50) {
            maior_que_cinquenta[i] = 1;
            contador_maiores++;
        }
    }

    if (contador_maiores == 0) {
        printf("Não ha numeros maiores que 50.\n");
    } else {
        for (int i = 0; i < 10; i++) {
            if (maior_que_cinquenta[i]) {
                printf("%d eh maior que 50 (posicao no array: %d)\n", numeros[i], i);
            }
        }
    }

    return 0;
}

