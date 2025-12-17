#include <stdio.h>

int somaImparesEntre(int X, int Y) {
    int inicio, fim;
    int soma = 0;

    // Para resolver a contradição de, Se X > Y, troque-os
    if (X < Y) {
        inicio = X;
        fim = Y;
    } else {
        inicio = Y;
        fim = X;
    }
    for (int i = inicio + 1; i < fim; i++) {
        // Verificando se o número é ímpar.
        if (i % 2 != 0) {
            soma += i;
        }
    }

    return soma;
}

int main() {
    int x1 = 6;
    int y1 = 15;
    // Ímpares entre 6 e 15: 7, 9, 11, 13.  Soma = 40.
    
    int x2 = 10;
    int y2 = 5;
    // Troca para [5, 10]. Ímpares entre 5 e 10: 7, 9. Soma = 16.
    
    int x3 = 3;
    int y3 = 4;
    // Ímpares entre 3 e 4: Nenhum. Soma = 0.

    printf("Soma dos ímpares entre %d e %d: %d\n", x1, y1, somaImparesEntre(x1, y1));
    printf("Soma dos ímpares entre %d e %d (trocado): %d\n", x2, y2, somaImparesEntre(x2, y2));
    printf("Soma dos ímpares entre %d e %d: %d\n", x3, y3, somaImparesEntre(x3, y3));

    return 0;
}
