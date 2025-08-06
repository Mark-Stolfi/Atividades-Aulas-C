//
// Created by Mark_stolf on 06/08/2025.
//
#include <stdio.h>

int main() {
    int i=1, criancas=0;
    float F=0, M=0, mes_vida, periodo=0;
    char sexo;
    printf("Digite a quantidade de criancas nascidas: \n");
    scanf("%d%*c", &criancas);


    while (i <= criancas) {
        printf("Digite o sexo crianca %d:\n",i);
        scanf("%c%*c", &sexo);
        printf("Digite quantos meses a crianca viveu");
        scanf("%d%*c", &mes_vida);
        if (sexo == 'm' || sexo == 'M') {
            M += 1;
        }
        else if (sexo == 'f' || sexo == 'F') {
            F += 1;
        }
        else {
            printf("Caracter invalido\n");
        }

        if (mes_vida <= 24) {
            periodo += 1;
        }
        i += 1;

    }
    printf("\nQuantidade de criancas do sexo masculino mortas: %.1f%%", M / criancas * 100);
    printf("\nQuantidade de criancas do sexo feminino mortas: %.1f%%", F / criancas * 100);
    printf("\nQuantidade de criancas mortas no periodo de 24 meses: %.1f%%", periodo / criancas * 100);

    return 0;

}
