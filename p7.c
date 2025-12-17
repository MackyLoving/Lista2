#include <stdio.h>

int inverte(int n, int acumulador) {
    // Caso Base: Se n for 0, significa que todos os dígitos foram processados.
    if (n == 0) {
        return acumulador;
    }
    

    
    //Extrai o último dígito de n: n % 10
    int ultimo_digito = n % 10;
    
    // Adiciona o último dígito ao acumulador :
    int novo_acumulador = (acumulador * 10) + ultimo_digito;
    
    // Remove o último dígito de n e chama a função recursivamente
    return inverte(n / 10, novo_acumulador);
}

int ehPalindromo(int n) {
    // Números negativos geralmente não são considerados palíndromos nesta definição.
    if (n < 0) {
        return 0;
    }
    
    // Chama a função auxiliar 'inverte', passando o número original e 0 como acumulador inicial.
    int n_invertido = inverte(n, 0);
    
    // Retorna 1 se o número original for igual ao seu inverso.
    return (n == n_invertido);
}

int main() {
    int num1 = 121;  // Palíndromo
    int num2 = 1234; // Não Palíndromo
    int num3 = 7;    // Palíndromo
    int num4 = 44044; // Palíndromo
    
    printf("--- Teste de Números Palíndromos ---\n");
    
    printf("O número %d é palíndromo? %s\n", num1, ehPalindromo(num1) ? "Sim (1)" : "Não (0)");
    printf("O número %d é palíndromo? %s\n", num2, ehPalindromo(num2) ? "Sim (1)" : "Não (0)");
    printf("O número %d é palíndromo? %s\n", num3, ehPalindromo(num3) ? "Sim (1)" : "Não (0)");
    printf("O número %d é palíndromo? %s\n", num4, ehPalindromo(num4) ? "Sim (1)" : "Não (0)");
    
    return 0;
}
