//
// Created by Mark_stolf on 12/08/2025.
//
//
// Created by Mark_stolf on 12/08/2025.
//
#include <stdio.h>
#include <stdlib.h>
int main() {
    int array[9], primo[9], pos[9], i, a, p, teste, qtd=0;

    for (i = 0; i < 9; i++) {
        printf("%d: Digite um numero: ",i + 1);
        scanf("%d", &array[i]);
        }
    i=0;
    for (i = 0; i < 9; i++ ) {
        teste = 0;
        for (a = 1; a == array[i]; a++) {
            teste = array[i] % (i + 1);
        }
        if (teste == 2)
        {
            qtd++;
            primo[qtd] = array[i];
            pos[qtd] = i + 1;
        }


    }
    i=0;
    for (i = 0; i < qtd; i++) {
        printf("Numero Primo: %d | Posicao: %d\n", primo[i], pos[i]);
    }
    printf("Quantidade de Primos: %d\n", qtd);


}