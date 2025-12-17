#include <stdio.h>

void minMax(int a, int b, int c, int *min, int *max) {
    *min = a;
    *max = a;

    if (b < *min) {
        *min = b;
    }
    else if (b > *max) {
        *max = b;
    }

    if (c < *min) {
        *min = c;
    }
    else if (c > *max) {
        *max = c;
    }
}

int main() {
    int v1 = 45;
    int v2 = 12;
    int v3 = 90;
    
    int menor_valor;
    int maior_valor;

    minMax(v1, v2, v3, &menor_valor, &maior_valor);
    
    printf("Valores de entrada: %d, %d, %d\n", v1, v2, v3);
    printf("Menor valor (MÍN): %d\n", menor_valor); 
    printf("Maior valor (MAX): %d\n", maior_valor); 
    
    // Outro teste
    int x = -5, y = 10, z = 0;
    minMax(x, y, z, &menor_valor, &maior_valor);
    printf("\nValores de entrafda: %d, %d, %d\n", x, y, z);
    printf("Menor valor (MÍN): %d\n", menor_valor); 
    printf("Maior valor (MAX): %d\n", maior_valor);  

    return 0;
}
