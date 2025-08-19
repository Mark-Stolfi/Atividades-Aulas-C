//
// Created by Mark_stolf on 12/08/2025.
//

#include <stdio.h>
#include <stdlib.h>
int main() {
    int array[9], primo, pos, i, a, divisores, qtd=0;

    for (i = 0; i < 9; i++) {
        printf("%d: Digite um numero: ",i + 1);
        scanf("%d", &array[i]);
        }

    for (i = 0; i < 9; i++ ) {
        divisores =0;
        for (a = 1; a <= array[i]; a++) {
            if (array[i] % a == 0) {
                divisores++;

            }
        }
        if (divisores == 2) {
            primo = array[i];
            pos = i + 1;
            qtd++;
            printf("Numero Primo: %d | Posicao: %d\n", primo, pos);
        }

    }
    printf("Quantidade de Primos: %d\n", qtd);
}