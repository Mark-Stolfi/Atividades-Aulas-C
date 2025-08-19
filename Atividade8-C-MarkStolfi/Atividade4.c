//
// Created by Mark_stolf on 19/08/2025.
//
#include <limits.h>
#include <stdio.h>

int main() {
    float estoque[5][3];
    int qtdeProdutosNosArmazens[4][3];
    int maiorEstoqueProduto2 = 0;
    int menorEstoqueArmazem = INT_MAX;
    int indiceArmazemMenorEstoque = -1;

    for (int i = 0; i < 5; i++) {
        if (i < 4) {
            printf("Armazem %d\n", i + 1);
        } else {
            printf("Custos\n");
        }
        for (int j = 0; j < 3; j++) {
            if (i < 4) {
                printf("Produto %d: ", j + 1);
                scanf("%f", &estoque[i][j]);
                qtdeProdutosNosArmazens[i][j] = (int)estoque[i][j];
            } else {
                printf("Custo produto %d: ", j + 1);
                scanf("%f", &estoque[i][j]);
            }
        }
    }

    for (int i = 0; i < 4; i++) {
        int totalArmazem = 0;
        for (int j = 0; j < 3; j++) {
            totalArmazem += qtdeProdutosNosArmazens[i][j];
            if (j == 1 && qtdeProdutosNosArmazens[i][j] > maiorEstoqueProduto2) {
                maiorEstoqueProduto2 = qtdeProdutosNosArmazens[i][j];
            }
        }

        if (totalArmazem < menorEstoqueArmazem) {
            menorEstoqueArmazem = totalArmazem;
            indiceArmazemMenorEstoque = i;
        }
        printf("Total armazem %d: %d\n", i + 1, totalArmazem);
    }

    printf("\nMaior estoque do produto 2: %d\n", maiorEstoqueProduto2);
    printf("Armazem com menor estoque: %d (total %d)\n", indiceArmazemMenorEstoque + 1, menorEstoqueArmazem);

    printf("\nCustos por armazem:\n");
    for (int i = 0; i < 4; i++) {
        float custoTotal = 0;
        for (int j = 0; j < 3; j++) {
            custoTotal += qtdeProdutosNosArmazens[i][j] * estoque[4][j];
        }
        printf("Armazem %d: %.2f\n", i + 1, custoTotal);
    }

    return 0;
}
