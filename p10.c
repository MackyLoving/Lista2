#include <stdio.h>

void fatoresPrimos(int n, int divisor) {
    // Se n chegou a 1, a decomposição está completa.
    if (n == 1) {
        return;
    }

    // Se o divisor for maior que a raiz quadrada de n, 
    // o n restante (n > 1) deve ser um primo, que é o último fator.
    if (divisor * divisor > n) {
        printf("%d", n);
        return;
    }

    // UM fator primo.
    if (n % divisor == 0) {
        printf("%d", divisor);

        // Imprime o símbolo de multiplicação se o número restante for maior que 1.
        if ((n / divisor) > 1) {
            printf(" * ");
        }

        // Essa chamada recursiva reduz n e mantém o divisor
        fatoresPrimos(n / divisor, divisor);
    } 
    else {
        // Já essa chamada mantém n e tenta o próximo divisor.
        fatoresPrimos(n, divisor + 1);
    }
}

int main() {
    int num1 = 12;  // Esperado: 2 * 2 * 3
    int num2 = 100; 
    int num3 = 17;  
    
    printf(" Decomposição de fatores primos \n");
    
    printf("%d = ", num1);
    fatoresPrimos(num1, 2);
    printf("\n"); // Saída: 12 = 2 * 2 * 3

    printf("%d = ", num2);
    fatoresPrimos(num2, 2);
    printf("\n"); // Saída: 100 = 2 * 2 * 5 * 5

    printf("%d = ", num3);
    fatoresPrimos(num3, 2);
    printf("\n"); 

    return 0;
}
