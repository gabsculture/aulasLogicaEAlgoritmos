#include <stdio.h>

int main() {
    int valor;
    int numerosPositivos = 0;
    int numerosNegativos = 0;
    for (int i = 1; i <= 5; i++) {
        printf("Digite um valor: \n");
        scanf("%d", &valor);
        if (valor > 0) {
            numerosPositivos++;
        } else {
            numerosNegativos++;
        }
    }
    printf("Numeros negativos: %d", numerosNegativos);
    printf("Numeros positivos: %d", numerosPositivos);
}

