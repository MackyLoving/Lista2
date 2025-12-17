#include <stdio.h>

void processarPositivos(int numeros[], int *contador_positivos, float *media_positivos) {
    int soma_positivos = 0;
    int contagem = 0;

    for (int i = 0; i < 6; i++) {
        if (numeros[i] > 0) {
            contagem++;
            soma_positivos += numeros[i];
        }
    }

    // Armazena a contagem final no ponteiro fornecido.
    *contador_positivos = contagem;
    // Calculando a média
    if (contagem > 0) {
        *media_positivos = (float)soma_positivos / contagem;
    } else {
        *media_positivos = 0.0f;
    }
}

int main() {
    // Definindo Array para os 6 valores.
    int valores[6];
    
    printf("Digite seis valores inteiros:\n");
    for (int i = 0; i < 6; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &valores[i]);
    }

    // Variáveis para armazenar os resultados da função.
    int count;
    float average;

    processarPositivos(valores, &count, &average);
    printf("\n--- Resultados ---\n");
    printf("Foram encontrados %d valores positivos.\n", count);
    
    if (count > 0) {
        printf("A média dos valores positivos é: %.2f\n", average);
    } else {
        printf("n ão há valores positivos para calcular a média.\n");
    }

    return 0;
}
