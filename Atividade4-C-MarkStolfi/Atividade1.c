//
// Created by mark_stolf on 05/08/2025.
//
#include <stdio.h>
#include <string.h>
int main() {
    float salario = 1000, aumento, cont = 2019; int ano_atual, ano_inicio = 2018, ano_cont, i;
    printf("Informe o ano atual:\n");
    scanf("%d", &ano_atual);
    ano_cont = ano_atual - ano_inicio;
    printf("Salario inicial: R$1000\n\n");
    for (i = 0; i <= ano_cont; i++){
        printf ("(Ano %.0f)\n",cont);
        aumento = aumento + 0.015;
        salario = salario + (salario * aumento);
        printf("Salario: R$%.2f\n\n", salario);

        cont++;

    }
    return 0;
}