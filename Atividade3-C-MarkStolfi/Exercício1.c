//
// Created by mark_stolf on 05/08/2025.
//

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float num1, num2, resultado;
    char var;

    printf("Examplo: (1 + 1), (1 - 1), (1 * 1) & (1 / 1)\n");
    printf("=======Calculadora 1.0=======\n");
    scanf("%f %c %f", &num1, &var, &num2);

    switch (var) {
        case '+':
            resultado = num1 + num2;
            printf("Resultado: %.2f" ,resultado);
            break;
        case '-':
            resultado = num1 - num2;
            printf("Resultado: %.2f" ,resultado);
            break;
        case '*':
            resultado = num1 * num2;
            printf("Resultado: %.2f" ,resultado);
            break;
        case '/':
            resultado = num1 / num2;
            if (num1 || num2 == 0)
                printf("Erro: Divisao por Zero!");
            else
                printf("Resultado é de: %.2f" ,resultado);
            break;
        default:
            printf("Número invalido!\n");
            break;
    }
}