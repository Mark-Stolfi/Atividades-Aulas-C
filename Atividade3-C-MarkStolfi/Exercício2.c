//
// Created by mark_Stolf on 30/07/2025.
//

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    int dia, mes;
    printf("Insira Dia e Mes: ");
    scanf("%d%*c %d%*c", &dia, &mes);

    switch (mes) {
        case 1:
            if (dia >= 20 && dia <= 31)
                printf("Seu signo e: Aquario\n");
            else if (dia >= 1 && dia <= 19)
                printf("Seu signo e: Capricornio\n");
            else
                printf("Dia invalido para Janeiro.\n");
            break;
        case 2:
            if (dia >= 1 && dia <= 18)
                printf("Seu signo e: Aquario\n");
            else if (dia >= 19 && dia <= 29)
                printf("Seu signo e: Peixes\n");
            else
                printf("Dia invalido para Fevereiro.\n");
            break;
        case 3:
            if (dia >= 1 && dia <= 20)
                printf("Seu signo e: Peixes\n");
            else if (dia >= 21 && dia <= 31)
                printf("Seu signo e: Aries\n");
            else
                printf("Dia invalido para Marco.\n");
            break;
        case 4:
            if (dia >= 1 && dia <= 19)
                printf("Seu signo e: Aries\n");
            else if (dia >= 20 && dia <= 30)
                printf("Seu signo e: Touro\n");
            else
                printf("Dia invalido para Abril.\n");
            break;
        case 5:
            if (dia >= 1 && dia <= 20)
                printf("Seu signo e: Touro\n");
            else if (dia >= 21 && dia <= 31)
                printf("Seu signo e: Gemeos\n");
            else
                printf("Dia invalido para Maio.\n");
            break;
        case 6:
            if (dia >= 1 && dia <= 20)
                printf("Seu signo e: Gemeos\n");
            else if (dia >= 21 && dia <= 30)
                printf("Seu signo e: Cancer\n");
            else
                printf("Dia invalido para Junho.\n");
            break;
        case 7:
            if (dia >= 1 && dia <= 22)
                printf("Seu signo e: Cancer\n");
            else if (dia >= 23 && dia <= 31)
                printf("Seu signo e: Leao\n");
            else
                printf("Dia invalido para Julho.\n");
            break;
        case 8:
            if (dia >= 1 && dia <= 22)
                printf("Seu signo e: Leao\n");
            else if (dia >= 23 && dia <= 31)
                printf("Seu signo e: Virgem\n");
            else
                printf("Dia invalido para Agosto.\n");
            break;
        case 9:
            if (dia >= 1 && dia <= 22)
                printf("Seu signo e: Virgem\n");
            else if (dia >= 23 && dia <= 30)
                printf("Seu signo e: Libra\n");
            else
                printf("Dia invalido para Setembro.\n");
            break;
        case 10:
            if (dia >= 1 && dia <= 22)
                printf("Seu signo e: Libra\n");
            else if (dia >= 23 && dia <= 31)
                printf("Seu signo e: Escorpiao\n");
            else
                printf("Dia invalido para Outubro.\n");
            break;
        case 11:
            if (dia >= 1 && dia <= 21)
                printf("Seu signo e: Escorpiao\n");
            else if (dia >= 22 && dia <= 30)
                printf("Seu signo e: Sagitario\n");
            else
                printf("Dia invalido para Novembro.\n");
            break;
        case 12:
            if (dia >= 1 && dia <= 21)
                printf("Seu signo e: Sagitario\n");
            else if (dia >= 22 && dia <= 31)
                printf("Seu signo e: Capricornio\n");
            else
                printf("Dia invalido para Dezembro.\n");
            break;
        default:
            printf("Mes invalido.\n");
    }

    return 0;
}
