#include <stdio.h>

int somaDiv(int n, int d) {
    //Quando o divisor chega a 0, a soma termina.
    if (d == 0) {
        return 0;
    }
    
    // Aqui se verifica se d é um divisor de n.
    if (n % d == 0) {
        // Se for divisor, adiciona d a soma e continua a recursão com d-1.
        return d + somaDiv(n, d - 1);
    } else {
        // Se não for divisor, apenas continua a recursão com d-1.
        return somaDiv(n, d - 1);
    }
}

// Verifica se um número é perfeito.
int ehPerfeito(int n) {
    // 0 e 1 não são considerados perfeitos.
    if (n <= 1) {
        return 0;
    }
  
    int soma_divisores = somaDiv(n, n / 2);
    
    // Se a função recursiva somaDiv começa a contagem de n/2 (para otimização).
    // No entanto, como a função recursiva foi feita para começar de d=n/2 e ir até 1, 
    // ela já inclui o 1 no ca lculo. Se o 'd' for 1, a função soma ele.
    
    //Para garantir que o divisor 1 seja incluído, 
    // a função somaDiv deve começar em n/2 e ir até 1, o que foi feito.
    
    // Se a soma dos divisores próprios (calculada pela somaDiv) é igual a n.
    return (soma_divisores + 1 == n); 

    return (somaDiv(n, n - 1) == n);
}

int main() {
    int num1 = 6;   // Perfeito: 1 + 2 + 3 = 6
    int num2 = 28;  // Perfeito: 1 + 2 + 4 + 7 + 14 = 28
    int num3 = 12;  // Não perfeito: 1 + 2 + 3 + 4 + 6 = 16 != 12
    int num4 = 496; // Perfeito
    
    printf("--- Teste de Números Perfeitos ---\n");
    printf("O número %d é perfeito? %s\n", num1, ehPerfeito(num1) ? "Sim" : "Não");
    printf("O número %d é perfeito? %s\n", num2, ehPerfeito(num2) ? "Sim" : "Não");
    printf("O número %d é perfeito? %s\n", num3, ehPerfeito(num3) ? "Sim" : "Não");
    printf("O número %d é perfeito? %s\n", num4, ehPerfeito(num4) ? "Sim" : "Não");
    
    return 0;
}
