#include <stdio.h>

void reduz(int *a, int *b) {
    int contador = 0; // Inicializa o contador de operações.

    // Enquanto os valores não forem iguais, o processo deve continuar.
    while (*a != *b) {
        
        // Verificand9 se a é estritamente maior que b
        if (*a > *b) {
            *a = *a - *b;
            contador++; 
        } 
        else if (*b > *a) {
            *b = *b - *a;
            contador++; 
        }
    }
    
    // Aqui eu to imprimindo na função p ficar um pouco mais tranquilo
    printf("\n Resultados \n");
    printf("Estabilização: *a = *b = %d (MDC)\n", *a);
    printf("Total de operações realizadas: %d\n", contador);
}

int main() {
    int num1 = 45;
    int num2 = 18;
    // O MDC de 45 tem que ser 18 é 9.
    
    printf("Valores iniciais: A=%d, B=%d\n", num1, num2);
    reduz(&num1, &num2);
    printf("Valores finais: A=%d, B=%d\n", num1, num2);

    // Utilizando um segundo exmplo
    int num3 = 10;
    int num4 = 4;
    
    printf("\nValores iniciais: A=%d, B=%d\n", num3, num4);
    reduz(&num3,  &num4);
    printf("Valores finais: A=%d, B=%d\n", num3, num4);

    return 0;
}
