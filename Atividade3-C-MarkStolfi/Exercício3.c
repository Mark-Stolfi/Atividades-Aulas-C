#include <stdio.h>

int main() {
float salario, imposto; int op;
    printf("Insira o seu Salario: ");
    scanf("%f", &salario);
    printf("Escolha Uma das Opcoes Abaixo: ");
    printf("\n 1. Imposto\n 2. Novo Salario\n 3. Classificacao\n");
    scanf("%d", &op);

    switch (op) {
        case 1:
            printf("Salario = %.2f ", salario);
            if (salario <500){
                imposto = salario - (salario*0.05);
                printf("\nSalario Com Imposto = %.2f \n", imposto);
            }
            else if (salario >=500 && salario <=850){
                imposto = salario - (salario*0.10);
                printf("\nSalario Com Imposto = %.2f \n", imposto);
            }
            else if (salario >850){
                imposto = salario - (salario*0.15);
                printf("\nSalario Com Imposto = %.2f \n", imposto);
            }
        break;
        case 2: printf("Salario = %.2f ", salario);
            if (salario <450) {
                printf("\nNovo Salario = %.2f \n", salario + 100);
            }
            else if (salario >=450 && salario <750) {
                printf("\nNovo Salario = %.2f \n", salario + 75);
            }
            else if (salario >=750 && salario <=1500) {
                printf("\nNovo Salario = %.2f \n", salario + 50);
            }
            else if (salario >1500) {
                printf("\nNovo Salario = %.2f \n", salario + 25);
            }
        break;
        case 3: printf("Salario = %.2f ", salario);
            if (salario <=700){
            printf("\nSituacao: Mal Remunerado\n");
            }
            else if (salario >700) {
                printf("\nSituacao: Bem Remunerado\n");
            }
    }

return 0;
}


//
// Created by mark_Stolf on 30/07/2025.
//
