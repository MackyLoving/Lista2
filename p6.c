#include <stdio.h>

int somaDivisores(int n, int d) {
    if (d == 0) {
        return 0;
    }

    int soma_do_resto = somaDivisores(n, d - 1);
    if (n % d == 0) {
        // Se for divisor, adiciona
        return d + soma_do_resto;
    } else {
        // Se não for divisor, retorna apenas a soma dos divisores menores.
        return soma_do_resto;
    }
}

int amigos(int a, int b) {
    // Números devem ser positivos e diferentes para serem amigos.
    if (a <= 0 || b <= 0 || a == b) {
        return 0;
    }
    
    int soma_a = somaDivisores(a, a - 1);
    int soma_b = somaDivisores(b, b - 1);
    
    if (soma_a == b && soma_b == a) {
        return 1;
    } else {
        return 0; 
    }
}

int main() {
    int num_amigo1 = 220;
    int num_amigo2 = 284;
    
    int num_nao_amigo1 = 6; 
    int num_nao_amigo2 = 10;
    
    printf("--- Teste de Números Amigos ---\n");
    
    // Teste 1: Amigos (220 e 284)
    if (amigos(num_amigo1, num_amigo2)) {
        printf("Os números %d e %d SAO amigos.\n", num_amigo1, num_amigo2);
        // Divisores de 220: 1, 2, 4, 5, 10, 11, 20, 22, 44, 55, 110. Soma = 284.
        // Divisores de 284: 1, 2, 4, 71, 142. Soma = 220.
    } else {
        printf("Os números %d e %d NAO sao amigos.\n", num_amigo1, num_amigo2);
    }

    // Teste 2: Não Amigos (6 e 10)
    if (amigos(num_nao_amigo1, num_nao_amigo2)) {
        printf("Os números %d e %d SAO amigos.\n", num_nao_amigo1, num_nao_amigo2);
    } else {
        printf("Os números %d e %d NAO sao amigos.\n", num_nao_amigo1, num_nao_amigo2);
    }
    
    return 0;
}
