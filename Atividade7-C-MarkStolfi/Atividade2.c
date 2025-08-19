#include <stdio.h>

int main() {
    char carro[5][100];
    float consumo[5];
    int indice_economico = 0;  // índice do carro mais econômico

    for (int i = 0; i < 5; i++) {
        printf("Insira o modelo de carro: ");
        scanf(" %[^\n]", carro[i]);

        consumo[i] = 0;
        while (consumo[i] <= 0) {
            printf("Insira o consumo do carro (km/l): ");
            scanf("%f", &consumo[i]);
            if (consumo[i] <= 0) {
                printf("Consumo invalido, tente novamente.\n");
                break;
            }
        }

        if (i == 0 || consumo[i] > consumo[indice_economico]) {
            indice_economico = i;
        }
    }

    printf("\nModelo mais economico: %s (%.2f km/l)\n", carro[indice_economico], consumo[indice_economico]);
    printf("Litros de combustivel para percorrer 1000km:\n");
    printf("Modelo | Litros\n");

    for (int i = 0; i < 5; i++) {
        float litros = 1000 / consumo[i];
        printf("%s | %.2f litros\n", carro[i], litros);
    }

    return 0;
}
