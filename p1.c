#include <stdio.h>

int somaDigitos(int n) {
    if (n == 0) {
        return 0;
    }
    
    return (n % 10) + somaDigitos(n / 10);
}

int main() {
    int numero = 483;
    printf("A soma dos dígitos de %d é: %d\n", numero, somaDigitos(numero));

    return 0;
}
