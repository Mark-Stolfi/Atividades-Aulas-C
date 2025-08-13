//
// Created by Mark_stolf on 12/08/2025.
//
#include <stdio.h>
#include <ctype.h>

int main() {
    int i, qtdBarato = 0, qtdNormal = 0, qtdCaro = 0;
    float precoUnitario, custoEstocagem, imposto, precoFinal;
    float somaCusto = 0, somaImposto = 0, totalImposto = 0;
    float maiorPreco = 0, menorPreco = 1000000;
    char refrigeracao, categoria;

    for (i = 1; i <= 12; i++) {
        printf("Produto %d\n", i);

        printf("Digite o preco unitario: ");
        scanf("%f%*c", &precoUnitario);

        do {
            printf("Possui refrigeracao? (S/N): ");
            scanf(" %c%*c", &refrigeracao);
            refrigeracao = toupper(refrigeracao);
        } while (refrigeracao != 'S' && refrigeracao != 'N');

        do {
            printf("Digite a categoria (A - Alimentacao, L - Limpeza, V - Vestuario): ");
            scanf(" %c%*c", &categoria);
            categoria = toupper(categoria);
        } while (categoria != 'A' && categoria != 'L' && categoria != 'V');

        if (precoUnitario <= 20) {
            if (categoria == 'A') custoEstocagem = 2.0;
            else if (categoria == 'L') custoEstocagem = 3.0;
            else custoEstocagem = 4.0;
        }
        else if (precoUnitario <= 50) {
            if (refrigeracao == 'S') custoEstocagem = 6.0;
            else custoEstocagem = 0.0;
        }
        else {
            if (refrigeracao == 'S') {
                if (categoria == 'A') custoEstocagem = 5.0;
                else if (categoria == 'L') custoEstocagem = 2.0;
                else custoEstocagem = 4.0;
            }
            else {
                if (categoria == 'L') custoEstocagem = 1.0;
                else custoEstocagem = 0.0;
            }
        }

        if (categoria == 'A' && refrigeracao == 'S') imposto = precoUnitario * 0.04;
        else imposto = precoUnitario * 0.02;

        precoFinal = precoUnitario + custoEstocagem + imposto;

        if (precoFinal <= 20) qtdBarato++;
        else if (precoFinal <= 100) qtdNormal++;
        else qtdCaro++;

        somaCusto += custoEstocagem;
        somaImposto += imposto;
        totalImposto += imposto;

        if (precoFinal > maiorPreco) maiorPreco = precoFinal;
        if (precoFinal < menorPreco) menorPreco = precoFinal;

        printf("Preco final: R$ %.2f\n", precoFinal);

        if (precoFinal <= 20) printf("Classificacao: Barato\n\n");
        else if (precoFinal <= 100) printf("Classificacao: Normal\n\n");
        else printf("Classificacao: Caro\n\n");
    }

    printf("Relatorio Final:\n");
    printf("Maior preco final: R$ %.2f\n", maiorPreco);
    printf("Menor preco final: R$ %.2f\n", menorPreco);
    printf("Media custo estocagem: R$ %.2f\n", somaCusto / 12);
    printf("Media imposto: R$ %.2f\n", somaImposto / 12);
    printf("Total imposto: R$ %.2f\n", totalImposto);
    printf("Produtos baratos: %d\n", qtdBarato);
    printf("Produtos normais: %d\n", qtdNormal);
    printf("Produtos caros: %d\n", qtdCaro);

    printf("\nFeito por Mark Stolfi\n");

    return 0;
}