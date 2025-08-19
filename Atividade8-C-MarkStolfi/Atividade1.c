//
// Created by Mark_stolf on 19/08/2025.
//
#include <stdio.h>

int main() {
    int matrizM[2][2];
    int maiorNumero = 0;
    int matrizR[2][2];

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("Valor (%d,%d): ", i, j);
            scanf("%d", &matrizM[i][j]);

            if (matrizM[i][j] > maiorNumero) {
                maiorNumero = matrizM[i][j];
            }
        }
    }

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            matrizR[i][j] = matrizM[i][j] * maiorNumero;
            printf("%d ", matrizR[i][j]);
        }
        printf("\n");
    }

    return 0;
}
