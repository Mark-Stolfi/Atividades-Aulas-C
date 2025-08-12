//
// Created by Mark_stolf on 06/08/2025.
//

#include <stdio.h>

int main() {
float media_sala = 0, soma = 0, media_alun = 0, nota1, nota2, a1=0, a2=0, a3=0, a4=0, a5=0, a6=0;
int aprovado, reprovado, exame, i =1;

    while (i <= 6) {
        printf("*Dica: Use espaco entre as notas\n");
        printf("Digite as duas notas do %d aluno:\n", i);
        scanf("%f %f", &nota1, &nota2);

        soma = nota1 + nota2;

        if (i == 1) {
            a1 = soma / 2;
        }
        if (i == 2) {
            a2 = soma / 2;
        }
        if (i == 3) {
            a3 = soma / 2;
        }
        if (i == 4) {
            a4 = soma / 2;
        }
        if (i == 5) {
            a5 = soma / 2;
        }
        if (i == 6) {
            a6 = soma / 2;
        }
        i++;
    }
    i = 1;
    while (i <= 6) {
        if (i == 1) {media_alun = a1;}
        if (i == 2) {media_alun = a2;}
        if (i == 3) {media_alun = a3;}
        if (i == 4) {media_alun = a4;}
        if (i == 5) {media_alun = a5;}
        if (i == 6) {media_alun = a6;}

        if (media_alun <= 3) {
            printf("Aluno %d Reprovado | Media: %.1f\n", i, media_alun);
        }
        else if ( media_alun < 7) {
            printf("Aluno %d Exame | Media: %.1f\n", i, media_alun);
        }
        else{
            printf("Aluno %d Aprovado | Media: %.1f\n", i, media_alun);
        }

        i++;
    }
    media_sala = a1 + a2 + a3 + a4 + a5 + a6 / 6;
    printf("Media de sala: %.1f", media_sala);
}
