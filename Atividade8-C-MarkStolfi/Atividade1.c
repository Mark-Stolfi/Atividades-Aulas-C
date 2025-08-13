//
// Created by mark_stolf on 13/08/2025.
//
#include <stdio.h>
int main() {
int m[2][2], r[2][2], maior=0;

    printf("Digite 4 numeros\n");
    for (int l = 0; l < 2; l++) {
        for (int c = 0; c < 2; c++) {

            printf("\nLinha %d Coluna %d = ", l, c);

            scanf("%d", &m[l][c]);
            if (m[l][c] > maior) {
                maior = m[l][c];
            }
        }
    }

    for (int l = 0; l < 2; l++) {
        for (int c = 0; c < 2; c++) {
            r[l][c] = m[l][c];
            if (r[l][c] < maior) {
                r[l][c] = r[l][c] * maior;//Entendi que o maior elemento (multiplicador)
                                          //não seja multiplicado por ele mesmo
            }
            printf("%d | ", r[l][c]);

        }
        printf("\n");
    }
}