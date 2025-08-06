//
// Created by Mark_stolf on 06/08/2025.
//
#include <stdio.h>
#include <limits.h>
int main() {
    int codigo_maior=0, codigo_menor=0, acidente=0, maior_ind=0, menor_ind=INT_MAX, veiculo;
    float media_acidente = 0, media_veiculo = 0;


    for (int i = 1; i <= 5; i++) {
        printf("digite a quantidade de veiculos da cidade %d:",i);
        scanf("%d", &veiculo);

        printf("digite a quantidade de acidente: \n");
        scanf("%d", &acidente);

        media_veiculo += veiculo;
        if (veiculo <2000){
            media_acidente += acidente;
        }

        if (acidente < menor_ind){
            menor_ind = acidente;
        }

        if (acidente > maior_ind){
            maior_ind = acidente;
            codigo_maior = i;
        }
        if (acidente < menor_ind) {
            menor_ind = acidente;
            codigo_menor = i;
        }


    }
printf("\nMaior Indice: %d Pertence a cidade %d\n", maior_ind, codigo_maior);
printf("\nMenor Indice: %d Pertence a cidade %d\n", menor_ind, codigo_menor);
printf("\nMedia de veiculos nas 5 cidades: %.0f\n", media_veiculo/5);
printf("\nMedia de acidentes nas 5 cidades: %.0f\n", media_acidente/5);
return 0;
}

