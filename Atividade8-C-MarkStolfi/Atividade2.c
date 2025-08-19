//
// Created by Mark_stolf on 19/08/2025.
//
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    char nomes_lojas[8][100];
    char nomes_produtos[4][100];
    float precos[4][8];

    for (int loja = 0; loja < 8; loja++) {
        printf("Digite o nome da loja %d:\n", loja + 1);
        scanf("%s", nomes_lojas[loja]);
    }

    for (int produto = 0; produto < 4; produto++) {
        printf("Digite o nome do produto %d:\n", produto + 1);
        scanf("%s", nomes_produtos[produto]);
    }

    for (int produto = 0; produto < 4; produto++) {
        for (int loja = 0; loja < 8; loja++) {
            printf("Digite o preco do produto '%s' na loja '%s':\n", nomes_produtos[produto], nomes_lojas[loja]);
            scanf("%f%*c", &precos[produto][loja]);
        }
    }

    printf("\nProdutos com preco ate R$ 60,00:\n");

    for (int produto = 0; produto < 4; produto++) {
        for (int loja = 0; loja < 8; loja++) {
            if (precos[produto][loja] <= 60.0) {
                printf("Produto: %-15s | Loja: %-15s | Preco: R$ %.2f\n",
                       nomes_produtos[produto], nomes_lojas[loja], precos[produto][loja]);
            }
        }
        printf("\n");
    }
}