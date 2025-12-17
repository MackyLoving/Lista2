#include <stdio.h>

int passos(int n) {
    // Se n chegou a 1.
    if (n == 1) {
        return 0;
    }

    //  Se n é par, divide por 2.
    if (n % 2 == 0) {
        return 1 + passos(n / 2);
    }
    else {
        return 1 + passos(n - 1);
    }
}

int main() {
    int num1 = 12; 
    int num2 = 13; 
    int num3 = 1;  
    
    printf("Passos para reduzir %d a 1: %d\n", num1, passos(num1));
    printf("Passos para reduzir %d a 1: %d\n", num2, passos(num2));
    printf("Passos para reduzir %d a 1: %d\n", num3, passos(num3));
    
    return 0;
}
