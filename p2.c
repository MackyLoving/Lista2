#include <stdio.h>

int somaMultiplos(int inicio, int fim, int k) {
    int soma = 0;
    
    for (int i = inicio; i <= fim; i++) {
        if (i % k == 0) {
            soma += i;
        }
    }
    
    return soma;
}

int main() {
    // Ex usanddo múltiplos de 5 no intervalo [10, 30] -> 10 + 15 + 20 + 25 + 30 = 100
    int inicio = 10;
    int fim = 30;
    int k = 5;
    
    printf("Soma dos múltiplos de %d em [%d, %d]: %d\n", k, inicio, fim, somaMultiplos(inicio, fim, k)); 

    return 0;
}
